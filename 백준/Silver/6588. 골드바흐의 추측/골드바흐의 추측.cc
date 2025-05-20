#include <iostream>
using namespace std;

const int MAX = 1000000;
bool check[MAX + 1] = { false, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (long long i = 2; i * i <= MAX; i++)
	{
		if (!check[i])
		{
			for (long long j = i * i; j <= MAX; j += i)
			{
				check[j] = true; // true → 소수가 아니라는 의미임. 주의!!
			}
		}
	}

	long long n;
	long long a = 0, b = 0, max = 0;
	while(true)
	{
		cin >> n;
		if (n == 0) break;

		// a와 b는 홀수 소수이므로, i는 3부터 시작
		for (long long i = 3; i <= n / 2; i += 2)
		{
			if (!check[i]) //현재 수가 소수이면서, 
			{
				if (!check[n - i]) // n - i(소수)도 소수라면,
				{
					
					a = i; b = n - i; break;
					
				}
			}
		}

		if (a == 0) //두 소수의 합으로 나타내지 못하는 경우
		{
			cout << "Goldbach's conjecture is wrong.\n";
		}
		else cout << n << " = " << a << " + " << b << "\n";

		a = b = 0;

	} 
}