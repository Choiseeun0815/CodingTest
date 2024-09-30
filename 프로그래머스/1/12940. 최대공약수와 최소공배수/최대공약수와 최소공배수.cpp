#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int larger = n > m ? n : m;

    int a = n*m ; // 최소 공배수 저장
    int b = 1; // 최대 공약수 저장 
    
    for(int i=1;i<=larger;i++)
    {
        if(n % i == 0 && m % i == 0)
        {
            if(i >= b) b = i;
        }
    }
    
    for(int i=1; i<= n*m;i++)
    {
        if(i % n == 0 && i % m == 0)
        {
            if(i <= a) a = i;
        }
    }
    
    answer.push_back(b);
    answer.push_back(a);
    
    return answer;
}