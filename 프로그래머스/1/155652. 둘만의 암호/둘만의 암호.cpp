#include <vector>
#include <string>
using namespace std;

string solution(string s, string skip, int index) 
{
	string answer = "";
	int i = 0;
	char compare = ' ';
	int code_a = static_cast<int>('a');
	int code_z = static_cast<int>('z');

	for (int i = 0; i < s.size(); i++)
	{
		int num = static_cast<int>(s[i]);

		for (int j = 0; j < index;)
		{
			num++;
			if (num > code_z) //알파벳이 z를 넘어가면 a로 돌려놓기
				num = code_a;

			compare = static_cast<char>(num);

			if (skip.find(compare) == string::npos) //스킵 문자에 존재하지 않으면,
				j++;
		}
		answer += compare; 
	}
	return answer;
}