#include <iostream>
using namespace std;

//    ↓ N  ↓ 마지막으로 올 수 있는 수
long long dp[91][2];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// 가장 작은 길이에 해당하는 초기값 지정
	dp[1][0] = 0; dp[1][1] = 1;

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}

	cout << dp[n][0] + dp[n][1];
}