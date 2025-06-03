#include <iostream>
using namespace std;

//     ↓ N  ↓ 마지막으로 올 수 있는 수
int dp[101][10];
int Func(int n)
{
	for (int i = 2; i <= n; i++) //dp[1][L]에 대해서는 main에서 처리함
	{
		for (int L = 0; L <= 9; L++) //마지막으로 사용한 계단수
		{
			int a = 0, b = 0;

			if (L != 9) //L이 9라면 L+1에서 10을 넘어버리므로 예외처리
				a = dp[i][L] = dp[i - 1][L + 1];
			if (L != 0) //L이 0이라면 L-1에서 음수가 나오므로 예외 처리
				b = dp[i][L] = dp[i - 1][L - 1];

			dp[i][L] = (a + b) % 1000000000;
		}
	}

	int res = 0;
	for (int i = 0; i <= 9; i++)
	{
		res = (res + dp[n][i]) % 1000000000;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	dp[1][0] = 0; //0으로 시작하는 수는 계단수 x
	for (int i = 1; i <= 9; i++)
	{
		dp[1][i] = 1; //길이가 1이며 i로 끝나는 경우의 수에 대해 미리 초기화
	}

	int n;
	cin >> n;
	
	cout << Func(n);
}