#include <iostream> 
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string input;
	int n;
	cin >> input >> n;

	stack<char> s2;

	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;

		if (c == 'L')
		{
			if (!input.empty())
			{
				s2.push(input[input.length()-1]);
				input.pop_back();
			}
			
		}
		else if (c == 'D')
		{
			if (!s2.empty())
			{
				input += s2.top();
				s2.pop();
			}
		}
		else if (c == 'B')
		{
			if (!input.empty())
				input.pop_back();
		}
		else if (c == 'P')
		{
			char m; cin >> m;
			input += m;

		}
	}

	if (!s2.empty())
	{
		int size = s2.size();
		for (int i = 0; i < size; i++)
		{
			input += s2.top();
			s2.pop();
		}
	}
	cout << input;
}