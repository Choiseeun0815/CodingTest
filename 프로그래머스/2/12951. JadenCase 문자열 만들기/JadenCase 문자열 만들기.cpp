#include <string>

using namespace std;

string solution(string s) {
	bool isStart = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			isStart = true;
		else {
			if (isStart)
			{
				s[i] = toupper(s[i]);
				isStart = false;
			}
			else {
				s[i] = tolower(s[i]);
			}
		}
	}

    return s;
}