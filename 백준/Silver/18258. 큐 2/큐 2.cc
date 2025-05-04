#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
void Func(string input, queue<int>& q, vector<int>& res)
{
    if (input == "push")
    {
        int num;
        cin >> num;
        q.push(num);
    }
    else if (input == "pop")
    {
        if (q.empty())
            res.push_back(-1);
        else
        {
            res.push_back(q.front());
            q.pop();
        }
    }
    else if (input == "size")
        res.push_back(q.size());
    else if (input == "empty")
    {
        if (q.empty()) res.push_back(1);
        else res.push_back(0);
    }
    else if (input == "front")
    {
        if (q.empty()) res.push_back(-1);
        else res.push_back(q.front());
    }
    else if (input == "back")
    {
        if (q.empty()) res.push_back(-1);
        else res.push_back(q.back());
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    vector<int> res;
    string input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        Func(input, q, res);
    }
    for (int i : res)
        cout << i << '\n';
}