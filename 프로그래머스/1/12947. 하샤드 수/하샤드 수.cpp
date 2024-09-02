#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int init_num = x;
    int n=0;
    while(x != 0)
    {
        n += x%10;
        x/=10;
    }
    answer = (init_num % n == 0);
    return answer;
}