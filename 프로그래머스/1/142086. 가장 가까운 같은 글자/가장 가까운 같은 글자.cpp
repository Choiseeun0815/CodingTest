#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    //첫 글자는 무조건 앞에 같은 숫자가 없으므로
    answer.push_back(-1); 
    for(int i=1; i<s.length(); i++)
    {
        int pos = s.rfind(s[i], i-1);
        // 찾고자하는 문자가 없다면, 
        if(std::string::npos == pos)
            answer.push_back(-1);
        else answer.push_back(i - pos);
    }
    return answer;
}