#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//dp[길이(최대 1000까지)][올 수 있는 수(0~9까지)]
int dp[1001][10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; 
	cin >> n;

	//길이가 1이고 마지막 수가 i인 수의 경우의 수는 모두 1
	for (int i = 0; i < 10; i++)
	{
		dp[1][i] = 1;
	}

	//길이는 2부터 n까지
	for (int i = 2; i <= n; i++)
	{
		//마지막으로 올 수 있는 수는 0부터 9까지
		for (int j = 0; j <= 9; j++)
		{
			//길이가 i이며, 마지막으로 온 수가 j인 오르막 수의 개수
			for (int k = 0; k <= j; k++)
			{
				dp[i][j] += dp[i - 1][k] % 10007;

			}
		}
	}

	int res = 0;
	for (int i = 0; i <= 9; i++)
	{
		res += dp[n][i];
	}
	cout << res % 10007;
}