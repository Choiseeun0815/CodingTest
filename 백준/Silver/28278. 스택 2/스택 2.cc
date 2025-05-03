#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void Func(int input, stack<int>& s, vector<int> &res)
{
	switch (input)
	{
	case(1):
	{
		int X;
		cin >> X;
		s.push(X); break;
	}
	case(2):
	{
		if (!s.empty()) // 비어있지 않으면, 
		{
			res.push_back(s.top());
			s.pop(); // 맨 위의 정수 제거
		}
		else res.push_back(-1);
		break;
	}
	case(3):
	{
		res.push_back(s.size());
		//cout << s.size() << '\n';
		break;
	}
	case(4):
	{
		if (s.empty())
		{
			res.push_back(1);
			//cout << 1 << '\n';
		}
		else res.push_back(0);
		break;
	}
	case(5):
	{
		if (!s.empty())
			res.push_back(s.top());
		else res.push_back(-1);
		break;
	}
	default:
		break;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	stack<int> s;
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		Func(input, s, v);
	}
	
	for (int i : v)
	{
		cout << i << '\n';
	}
}