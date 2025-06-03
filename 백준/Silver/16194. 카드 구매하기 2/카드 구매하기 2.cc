#include <iostream>
using namespace std;

int dp[1001];
int p[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	fill(dp, dp + 1001, 10001); //들어올 수 있는 가격 +1 만큼의 값으로 초기화
	dp[0] = p[0] = 0;
	
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		p[i] = x;
	}

	for (int i = 1; i <= n; i++) //i는 현재 만들고 싶은 카드 개수
	{
		for (int j = 1; j <= i; j++) //j는 카드팩 크기(1~j)
		{
			dp[i] = min(dp[i], dp[i - j] + p[j]);
		}
	}

	cout << dp[n];
}