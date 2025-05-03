#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int k;
	cin >> k;

	stack<int> s;
	for (int i = 0; i < k; i++)
	{
		int input;
		cin >> input;
		if (input == 0)
		{
			s.pop();
		}
		else s.push(input);
	}

	int cnt = 0;
	while (!s.empty())
	{
		cnt += s.top();
		s.pop();
	}
	cout << cnt;
}