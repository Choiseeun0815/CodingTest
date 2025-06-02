#include <iostream>
using namespace std;

const int MAX = 1'000'000;
int dp[MAX + 1];

int Func(int n)
{
	if (n == 1) return 0;
	if (dp[n] > 0) return dp[n];
	dp[n] = 1 + Func(n - 1);
	if (n % 2 == 0)
	{
		int tmp = Func(n / 2) + 1;
		if (dp[n] > tmp) dp[n] = tmp;
	}
	if (n % 3 == 0)
	{
		int tmp = Func(n / 3) + 1;
		if (dp[n] > tmp) dp[n] = tmp;
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