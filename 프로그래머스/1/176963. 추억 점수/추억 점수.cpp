#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
	vector<int> answer;

	for (int i = 0; i < photo.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < photo[i].size(); j++)
		{
			auto it = find(name.begin(), name.end(), photo[i][j]);
			int idx = distance(name.begin(), it);
			if (it != name.end()) //해당 이름이 존재하는 것
			{
				sum += yearning[idx];
			}
		}
		answer.push_back(sum);
	}
	return answer;
}