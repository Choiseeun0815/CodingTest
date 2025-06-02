#include <iostream>
using namespace std;

int dp[11];
int Func(int n)
{
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 0;
		if (i - 1 >= 0) dp[i] += dp[i - 1];
		if (i - 2 >= 0) dp[i] += dp[i - 2];
		if (i - 3 >= 0) dp[i] += dp[i - 3];
	}
	return dp[n];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		cout << Func(input) << '\n';
	}
	 
}