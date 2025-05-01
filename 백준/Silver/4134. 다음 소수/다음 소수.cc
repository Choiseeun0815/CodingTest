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

	long long n;
	cin >> n;
	vector<long long> v;
	for (long long i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		v.push_back(input);
	}

	for (long long x : v)
	{
		long long i = x;
		while (true)
		{
			if (isPrime(i)) {
				cout << i << '\n'; break;
			}
			i++;
		}
	}
}