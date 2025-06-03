#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MOD = 1000000009;
int dp[100001][4];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	//1, 2, 3을 만들 수 있는 조합식을 미리 초기화
	dp[1][1] = 1; // 1
	dp[2][2] = 1; // 2
	dp[3][1] = 1; // 2 + 1
	dp[3][2] = 1; // 1 + 2
	dp[3][3] = 1; // 3

	int n;
	cin >> n;
	vector<int> inputs;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		inputs.push_back(x);
	}

	int max = *max_element(inputs.begin(), inputs.end());

	//반영된 점화식
	for (int i = 4; i <= max; i++)
	{
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
		dp[i][3] = (dp[i - 3][2] + dp[i - 3][1]) % MOD;
	}

	// 나머지 연산을 합연산 뒤에 해줌으로, 오버플로우 방지
	for (int x : inputs)
	{
		cout << ((dp[x][1] + dp[x][2]) % MOD + dp[x][3]) % MOD << '\n';
	}
}