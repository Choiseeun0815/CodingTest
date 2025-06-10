#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1'000'000;
int dp[MAX +1];
void Func()
{
	int div = 1000000009; //나눠야 하는 수
	dp[0] = 1;
	for (int i = 1; i <= MAX; i++)
	{
		if (i - 1 >= 0) dp[i] = (dp[i] + dp[i - 1]) % div;
		if (i - 2 >= 0) dp[i] = (dp[i] + dp[i - 2]) % div;
		if (i - 3 >= 0) dp[i] = (dp[i] + dp[i - 3]) % div;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	Func();
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		cout << dp[a]<< '\n';
	}
}