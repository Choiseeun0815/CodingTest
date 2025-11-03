#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages)
{
	vector<int> answer;
	vector<pair<int, float>> vec;
	float failure_rate;

	for (int i = 1; i <= N; i++)
	{
		int current_len = stages.size();
		int cnt = 0;

		if(find(stages.begin(), stages.end(), i) != stages.end())
		{
			cnt = count(stages.begin(), stages.end(), i); //탈락자의 수
			stages.erase(remove(stages.begin(), stages.end(), i), stages.end()); //탈락자 제거
		}
		
		if (cnt == 0) //탈락자가 없다면, 탈락율 0
			failure_rate = 0;
		else
			failure_rate =  (float)cnt / (float)current_len; //i번째 스테이지 탈락율

		vec.push_back(make_pair(i, failure_rate));
	}
	
	sort(vec.begin(), vec.end(),
	[] (auto& a, auto& b)
	{
			if (a.second == b.second)
				return a.first < b.first;
			return a.second > b.second;
	});

	for (int i = 0; i < vec.size(); i++)
	{
		answer.push_back(vec[i].first);
	}
	return answer;
}
