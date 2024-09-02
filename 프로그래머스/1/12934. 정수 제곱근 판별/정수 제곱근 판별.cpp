#include <string>
#include <vector>
#include<cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for(int i=0; i<=n;i++ )
    {
        if(pow(i,2) == n)
        {
            answer =  pow(1+i,2);
            break;            
        }
    }
    if(answer == 0 ) answer = -1;
    return answer;
}