#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
	vector<string> vec;
	string compare = "";
	int cntX = 0, cntOther = 0;

	while (true)
	{
		if (compare == s) 
		{
			if(s.length() > 0)
				vec.push_back(compare);
			break;
		}

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == s[0])	cntX++;
			else cntOther++;

			compare += s[i];

			if (cntX == cntOther)
			{
				s = s.substr(i + 1);
				vec.push_back(compare);
				compare = "";
				cntX = cntOther = 0;
				break;
			}
		}
	}

	return vec.size();
}