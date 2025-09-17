#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
	string answer = "Yes";
	int idx1 = 0, idx2 = 0;

	for (int i = 0; i < goal.size(); i++)
	{
		if (goal[i] == cards1[idx1])
		{
			if (idx1 < cards1.size() - 1)
				idx1++;
			continue;
		}
		if (goal[i] == cards2[idx2])
		{
			if (idx2 < cards2.size() - 1)
				idx2++;
			continue;
		}

		answer = "No"; break;
	}
	return answer;
}