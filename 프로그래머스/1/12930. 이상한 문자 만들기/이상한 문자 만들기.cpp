#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            n=0; continue;
        }
        s[i] = (n%2) == 0 ? toupper(s[i]) : tolower(s[i]);
        n++;
    }
    answer = s;
    return answer;
}