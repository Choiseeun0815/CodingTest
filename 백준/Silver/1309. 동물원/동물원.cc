#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int dp[MAX + 1][3];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	//0번째 줄에 배치 안 하는 경우
	dp[0][0] = 1;
	//0번째 줄의 좌측에 배치하는 경우
	dp[0][1] = 1;
	//0번째 줄의 우측에 배치하는 경우
	dp[0][2] = 1;

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % 9901;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % 9901;
	}

	cout << (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % 9901;
}