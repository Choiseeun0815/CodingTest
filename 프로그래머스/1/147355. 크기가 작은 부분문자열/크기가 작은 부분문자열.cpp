#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int length = p.length();
    long cmp = stol(p);
    
    for(int i=0; i<=t.length() - length; i++)
    {
        long a = stol(t.substr(i, length));
        if(a<=cmp) answer++;
    }
    return answer;
}