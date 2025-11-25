#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) 
{
    string answer = "";
    vector<int> match; //짝꿍 숫자를 저장할 벡터
    vector<int> vecX, vecY; 
    for (int i = 0; i < X.length(); i++)
        vecX.push_back(X[i] - '0');

    for (int i = 0; i < Y.length(); i++)
        vecY.push_back(Y[i] - '0');
    
    sort(vecX.begin(), vecX.end());
    sort(vecY.begin(), vecY.end());

    int startIndexY = 0;
    for (int i = 0; i < vecX.size(); i++)
    {
        for (int j = startIndexY; j < vecY.size(); j++)
        {
            if (vecX[i] == vecY[j])
            {
                match.push_back(vecX[i]);
                startIndexY = 1 + j;
                    break;
            }
        }
    }

    if (match.size() == 0) return "-1";

    int cnt0 = 0;
    sort(match.rbegin(), match.rend()); 
    for (int i = 0; i < match.size(); i++)
    {
        answer += to_string(match[i]);
        if (match[i] == 0)
            cnt0++;
    }
    if (match.size() == cnt0) return "0";
    return answer;
}