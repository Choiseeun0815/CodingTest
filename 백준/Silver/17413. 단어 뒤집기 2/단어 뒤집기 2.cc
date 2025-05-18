#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	getline(cin, s);
	s += ' ';

	stack<char> _stack;
	bool isTag = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '<')
		{
			isTag = true; 
		}
		

		if (!isTag)
		{
			if(s[i] != ' ' && s[i] != '<' && s[i] != '>')
				_stack.push(s[i]);
		}
		
		if (s[i] == ' ' || s[i] == '<' || s[i] == '>')
		{
			if (!_stack.empty())
			{
				int size = _stack.size();
				for (int j = 0; j < size; j++)
				{
					cout << _stack.top();
					_stack.pop();
				}
			}
			if(s[i] == ' ') cout << s[i];
		}

		if (isTag)
		{
			if(s[i] != ' ')
				cout << s[i];
		}

		if (s[i] == '>')
		{
			isTag = false;
		}
	}

}
