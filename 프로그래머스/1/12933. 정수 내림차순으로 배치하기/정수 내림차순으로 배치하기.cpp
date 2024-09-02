#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);
    vector<int> v;
    
    for(int i=0;i<str.length();i++){
        v.push_back((int)(str[i] - '0'));
    }
    
    sort(v.rbegin(), v.rend());
    
    str = "";
    
    for(int i=0;i< v.size();i++)
    {
        str += to_string(v[i]);
        
    }
    answer = stoll(str);
    return answer;
}