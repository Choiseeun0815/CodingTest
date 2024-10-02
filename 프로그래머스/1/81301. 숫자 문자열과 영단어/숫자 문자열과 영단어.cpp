#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    string numbers_str[10] = {"zero","one","two","three","four","five","six",
                             "seven","eight","nine"};
    int pos = 0;
    for(int j=0; j<10;j++)
    {
        do
        {
            pos = s.find(numbers_str[j]);
            if(pos!=s.npos)
                s.replace(pos,numbers_str[j].length(),to_string(j));
        }while(pos != s.npos);
    }
    answer = stoi(s);
    return answer;
}