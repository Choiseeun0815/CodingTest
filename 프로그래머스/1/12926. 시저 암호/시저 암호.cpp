#include <string>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') 
        {
            answer += ' ';
            continue;
        }
        
        // 대문자인 경우
        if (isupper(s[i])) 
        {
            answer += (s[i] - 'A' + n) % 26 + 'A';
        }
        // 소문자인 경우
        else if (islower(s[i])) 
        {
            answer += (s[i] - 'a' + n) % 26 + 'a';
        }
    }

    return answer;
}
