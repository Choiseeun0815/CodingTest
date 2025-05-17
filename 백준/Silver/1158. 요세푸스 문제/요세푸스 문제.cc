#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	vector<int> ans;

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			// 앞에서 꺼내서 다시 뒤에 넣음
			q.push(q.front());
			q.pop();
		}
		// k번째 사람 제거
		ans.push_back(q.front());
		q.pop();
	}

	cout << '<';
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
			cout << ", ";
	}
	cout << '>';
}
