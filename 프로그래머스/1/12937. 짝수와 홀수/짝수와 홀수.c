#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char));
    
    answer = ((num%2)==0) ?"Even":"Odd";
    return answer;
}