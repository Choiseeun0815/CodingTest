#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    
    if(num == 1) return 0;
    int answer = 0;
    while(n != 1)
    {
        ++answer;
        if(answer >= 500) return -1;
        
        if(n%2 == 0) n /=2;
        else n = n*3 + 1;
    }
    return answer;
}