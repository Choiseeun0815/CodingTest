#include <iostream>
#include <vector>
using namespace std;

bool isPrime(long long n)
{
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	// 홀수에 대해서만 처리
	for (long long i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	vector<int> v;
	while (true)
	{
		int input;
		cin >> input;
		if (input == 0) break;

		v.push_back(input);
	}

	for (int x : v)
	{
		int cnt = 0;
		for (int i = x + 1; i <= 2 * x; i++)
		{
			if (isPrime(i))
				cnt++;
		}
		cout << cnt << '\n';
	}
}