#include <iostream>
#include <algorithm>
using namespace std;

int cnt2 = 0;
int cnt5 = 0;

void Func(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			if (i == 2) cnt2++;
			if (i == 5) cnt5++;
		}
	}

	if (n > 1) 
	{
		if (n == 2) cnt2++;
		if (n == 5) cnt5++;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (i == 2) cnt2++;
		if (i == 5) cnt5++;
		if (i >= 6) Func(i);
	}
	int minNumber = min(cnt2, cnt5);

	cout << minNumber;
}