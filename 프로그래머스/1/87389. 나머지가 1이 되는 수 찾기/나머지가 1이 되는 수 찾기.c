#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++)
    {
        if(n % i == 1)
        {
            if(answer == 0 || answer > i)
                answer = i;
        }
    }
    return answer;
}