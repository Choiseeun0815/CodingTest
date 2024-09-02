#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    
    for(int i=0;i<str.length();i++)
    {
        answer.push_back((int)(str[str.length()-1 -i] - '0'));
    }
    return answer;
}