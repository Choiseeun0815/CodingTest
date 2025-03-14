#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string dartResult) {
	int answer = 0;
	string num;
	int res = 0, index = -1;
	vector<int> scores;

	char bonus[3] = { 'S','D','T' };

	for (int i = 0; i < dartResult.size(); i++)
	{
		char c = dartResult[i];

		if (isdigit(c))
		{
			num += c;
		}
		else
		{
			if (!num.empty())
			{
				scores.push_back(stoi(num));
				index++;

				num = "";
			}

			for (int j = 0; j < 3; j++)
			{
				if (bonus[j] == c)
					scores[index] = pow(scores[index], j + 1);
			}
			if (c == '*')
			{
				scores[index] *= 2;
				if (index > 0)
					scores[index - 1] *= 2;
			}
			if (c == '#')
			{
				scores[index] *= -1;
			}
		}
	}
	for (int i = 0; i < scores.size(); i++)
	{
		answer += scores[i];
	}
	return answer;
}