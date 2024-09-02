#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p=0, y=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
            p++;
        else if(s[i] == 'y' || s[i] == 'Y')
            y++;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    if(p == 0 && y == 0) return true;
    else {
        answer = (p==y) ? true : false;
    }
    return answer;
}