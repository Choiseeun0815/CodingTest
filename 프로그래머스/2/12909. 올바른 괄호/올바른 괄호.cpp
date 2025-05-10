#include <iostream> 
#include <string>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
	stack<int> v1;
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			v1.push(1);
		}
		else if(s[i] == ')')
		{
			if (v1.empty()) return false;
			v1.pop();
		}
	}

	answer = v1.empty();
    return answer;
}