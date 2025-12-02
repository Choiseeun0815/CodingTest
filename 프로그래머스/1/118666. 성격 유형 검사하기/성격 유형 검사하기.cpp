#include <vector>
#include <map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
	string answer = "";
	//키: 매우 비동의~매우 동의, 값: 해당 키에 대한 선택 점수
	map<int, int> scores = { {1, 3}, {2, 2}, {3, 1}, {4, 0}, {5, 1}, {6, 2}, {7, 3} };
	map<char, int> res;
	vector<char> vec = { 'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N' };
	for (int i = 0; i < choices.size(); i++)
	{
		if (choices[i] < 4) //비동의 한 경우
		{
			res[survey[i][0]] += scores[choices[i]];
		}
		else if (choices[i] > 4) //동의 한 경우
		{
			res[survey[i][1]] += scores[choices[i]];
		}
	}

	for (int i = 0; i + 1 < vec.size(); i += 2)
	{
		if (res[vec[i]] < res[vec[i + 1]]) answer += vec[i + 1];
		else answer += vec[i];
	}
	
	return answer;
}