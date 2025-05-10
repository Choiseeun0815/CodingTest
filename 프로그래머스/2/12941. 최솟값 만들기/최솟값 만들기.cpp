#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end()); //오름차 정렬
    sort(B.begin(), B.end(), greater<int>()); //내림차 정렬

    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }
    return answer;
}