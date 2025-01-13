#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;

	int bigger = max(a, b);
	int smaller = min(a, b);

	for (long long i = 1; i <= smaller; i++)
	{
		long long num = i * bigger;
		if (num % smaller == 0)
		{
			cout << num; break;
		}
	}
}