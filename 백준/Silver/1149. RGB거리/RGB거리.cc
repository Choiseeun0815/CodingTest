#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 최대 1001개의 집, 색은 r, g, b각각 0,1,2로 표현
int dp[1001][3];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> R, G, B;
	for (int i = 0; i < n; i++)
	{
		int r, g, b;
		cin >> r >> g >> b;
		R.push_back(r); G.push_back(g); B.push_back(b);
	}

	//첫 번째 집을 각각 R, G, B의 색으로 칠하는 비용에 대한 정보
	dp[0][0] = R[0];
	dp[0][1] = G[0];
	dp[0][2] = B[0];

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R[i];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G[i];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + B[i];
	}

	int answer = min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
	cout << answer ;
}