#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) 
{
    unordered_map<string, int> totalPlays;
    for (int i = 0; i < genres.size(); i++)
    {
        //해당 키에 값을 누적(키가 없다면 자동으로 생성 후 초기값 0으로 설정)
        totalPlays[genres[i]] += plays[i];
    }

    vector<pair<string, int>> sortBestGenres(totalPlays.begin(), totalPlays.end());

    //pair의 second 값을 기준으로 내림차 정렬(플레이된 장르가 내림차로 정렬됨) 
    sort(sortBestGenres.begin(), sortBestGenres.end(), [](pair<string, int>& a, pair<string, int>& b)
        {
            return a.second > b.second;
        }
    );
    
    vector<int> answer;

    for (int i = 0; i < sortBestGenres.size(); i++)
    {
        vector<int> bestNumber;

        for (int j = 0; j < genres.size(); j++)
        {
            if (sortBestGenres[i].first == genres[j])
            {
                bestNumber.push_back(j); //장르에 따른 번호가 모두 들어감
            }
        }
        sort(bestNumber.begin(), bestNumber.end(), [&](int a, int b)
            {
                return plays[a] > plays[b];
            }
        );
            
        for (int j = 0; j < bestNumber.size(); j++)
        {
            if (j < 2)
                answer.push_back(bestNumber[j]);
        }
    }

    return answer;
}