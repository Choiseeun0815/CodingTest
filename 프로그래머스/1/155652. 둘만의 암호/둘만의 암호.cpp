#include <vector>
#include <string>
using namespace std;

string solution(string s, string skip, int index) 
{
	for (int i = 0; i < s.size(); i++)
	{

		for (int j = 0; j < index;)
		{
			s[i]++;
			if (s[i] > 'z') //알파벳이 z를 넘어가면 a로 돌려놓기
				s[i] = 'a';

			if (skip.find(s[i]) == string::npos) //스킵 문자에 존재하지 않으면,
				j++;
		}
	}
	return s;
}
