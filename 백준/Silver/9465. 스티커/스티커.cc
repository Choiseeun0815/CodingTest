#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100'000;
int dp[MAX + 1][3];
int price[2][MAX + 1];
vector<int> ans;
void Func(int n)
{
	//price 배열 세팅 완료
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int input; cin >> input;
			price[i][j] = input;
		}
	}

	// 0개의 스티커 뗀 가격
	dp[0][0] = 0;
	// 0열에서 위쪽 스티커 뗀 경우
	dp[0][1] = price[0][0];
	// 0열에서 아래쪽 스티커 뗀 경우
	dp[0][2] = price[1][0];
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = max({ dp[i - 1][0], dp[i - 1][1], dp[i - 1][2] });
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + price[0][i];
		dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + price[1][i];
	}

	int res = max({ dp[n - 1][0], dp[n - 1][2], dp[n - 1][1] });
	ans.push_back(res);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	//테스트 케이스의 수
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input; cin >> input;

		Func(input);
	}
	for (int i : ans)
	{
		cout << i << '\n';
	}
}