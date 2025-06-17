#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[10001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> wines;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		wines.push_back(a);
	}

	// 1번째까지 포도주를 마셨을 때, 마실 수 있는 포도주의 최대 양
	dp[1] = wines[0];
	// 2번째까지 포도주를 마셨을 때, 마실 수 있는 포도주의 최대 양
	dp[2] = wines[0] + wines[1];

	for (int i = 3; i <= n; i++)
	{
		dp[i] = max({ dp[i - 1] ,dp[i - 2] + wines[i - 1],
			dp[i - 3] + wines[i - 1] + wines[i - 2] });
	}

	cout << dp[n];
}