#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> a(n);
	vector<vector<int>> dp(n);
	
	for (int i = 0; i < n; i++)
	{
		// 삼각형 모양으로 벡터 세팅
		a[i].resize(i + 1);
		dp[i].resize(i + 1);
		for (int j = 0; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}

	dp[0][0] = a[0][0];
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = dp[i - 1][0] + a[i][0];
		dp[i][i] = dp[i - 1][i - 1] + a[i][i];
	}

	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
		}
	}
	
	int res = *max_element(dp[n - 1].begin(), dp[n - 1].end());
	cout << res;
}