#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//      N    K
int dp[201][201];
int num = 1000000000; //나눠야 하는 수

void Func(int n, int k)
{
	dp[0][0] = 1;
	for (int i = 0; i <= n; i++) //만들어야 하는 수
	{
		for (int j = 1; j <= k; j++) //사용해야 하는 수의 개수 
		{
			for (int l = 0; l <= i; l++) //마지막에 더할 수
			{
				//경우의 수 누적
				dp[i][j] = (dp[i][j] + dp[i - l][j - 1]) % num;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	Func(n, k);
	cout << dp[n][k];
}