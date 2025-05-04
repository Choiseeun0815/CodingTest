#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
bool Func(string input)
{
    if (input[input.length() - 1] != '.') return false;
    stack<char> s;
    for (char c : input)
    {
        if (c == '(' || c == '[')
            s.push(c);
        else if (c == ')')
        {
            if (s.empty())
                return false;
            else if (s.top() == '[')
                return false;
            
            s.pop();
        }
        else if (c == ']')
        {
            if (s.empty()) 
                return false;
            else if (s.top() == '(') 
                return false;
            s.pop();
        }
    }
    return s.empty();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string input;
    vector<string> res;
    while (true)
    {
        getline(cin, input); //공백 포함 문자열 입력
        if (input.compare(".") == 0) break;

        if (Func(input))
            res.push_back("yes\n");
        else
            res.push_back("no\n");
    }
    for (string s : res)
        cout << s;
}