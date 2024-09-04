#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() == 4 || s.length() == 6)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(isdigit(s[i]) == 0)
                answer = false;
        }
    }
    else answer = false;
    return answer;
}