#include <iostream>
using namespace std;

long long dp[1001];
long long  Func(int n) // 직사각형을 채우는 방법의 수를 리턴할 함수
{
	if (n == 1) return 1; // 2x1 직사각형의 경우 1개의 방법만 존재
	if (n == 2) return 2; // 2x2 직사각형의 경우 2개의 방법만 존재
	
	if (dp[n] != 0) return dp[n]; //메모리이제이션
	else dp[n] = (Func(n - 1) + Func(n - 2)) % 10007;

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