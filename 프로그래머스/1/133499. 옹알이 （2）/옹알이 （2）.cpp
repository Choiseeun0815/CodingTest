#include <string>
#include <vector>

using namespace std;
int solution(vector<string> babbling) {
	vector<string> vec = { "aya", "ye", "woo", "ma" };
	int answer = 0;
	for (int j = 0; j < babbling.size(); j++)
	{
		string s = babbling[j];
		bool canSpeak = false, isFinish = false;
		string preStr = "";
		while (!isFinish)
		{
			for (int i = 0; i < vec.size(); i++)
			{
				canSpeak = (s.rfind(vec[i], 0) == 0);
				if (canSpeak)
				{
					s = s.substr(vec[i].size(), s.length() - 1);
					if ((preStr == vec[i]))
					{
						canSpeak = false;
						isFinish = true;
					}

					preStr = vec[i];
					break;
				}
			}
			if (!canSpeak || s.length() <= 0) isFinish = true;
		}
		if (canSpeak) answer++;
	}
	return answer;
}