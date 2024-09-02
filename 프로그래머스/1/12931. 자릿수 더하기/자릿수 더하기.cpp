#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    int t = s.length();
    t = pow(10, t-1);
    
    for(int i=0;i<s.length();i++)
    {
        if(t==0) break;
        answer +=n/t;
        n %= t;        
        t /=10;
    }
    return answer;
}