#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	stack<int> s; //인덱스 저장을 위한 스택
	vector<int> res(n, -1); //크기가 n이며 기본값이 -1인 벡터
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int input; cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && v[i] > v[s.top()])
		{
			res[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i : res)
	{
		cout << i << ' ';
	}
}