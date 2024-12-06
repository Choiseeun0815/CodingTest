#include <iostream>
using namespace std;

int Func(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() 
{
	int n, res = 0;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (Func(i) + i == n)
		{
			res = i; break;
		}
	}
	cout << res;
}
