#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	stack<int> s;
	int n, answer = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		s.push(input);
	}

	int compare = s.top();
	s.pop();
	for (int i = 0; i < n - 1; i++)
	{
		if (compare < s.top())
		{
			compare = s.top();
			answer++;
		}
		s.pop();
	}
	cout << answer;
	
}