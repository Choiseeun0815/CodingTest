#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	stack<int> s;

	string input;
	cin >> input;

	int n = 0, res = 0;
	while (n < input.length())
	{
		if (input[n] == '(')
		{
			s.push(n);
		}
		else //닫는 괄호
		{
			if (!s.empty())
			{
				if (s.top() == n - 1) //레이저
				{
					s.pop();
					res += s.size();
				}
				else //레이저 아님
				{
					s.pop();
					res += 1;
				}
			}
		}
		n++;
	}
	cout << res;
}
