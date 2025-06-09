#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[100001];
int Func(int n)
{
	for (int i = 1; i <= n; i++)
	{
		dp[i] = i; //어떤 수 i를 만들기 위한 항의 최대 수는 i개 (1의 제곱을 i개 더함)
		for (int j = 1; j * j <= i; j++)
		{
			if (dp[i] > dp[i - j * j] + 1)
			{
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	return dp[n];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	cout << Func(n);
}