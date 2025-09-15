#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string solution(vector<int> food) {
	string answer = "";
	string r_answer = "";
	for (int i = 1; i < food.size(); i++)
	{
		int size = food[i] / 2;
		for (int j = 0; j < size; j++)
		{
			answer += to_string(i);
		}
	}
	r_answer = answer;
	reverse(r_answer.begin(), r_answer.end());

	answer += '0';
	return answer + r_answer;
}