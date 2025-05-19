#include <iostream>
using namespace std;

bool Func(int n)
{
	if (n < 2)return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input; cin >> input;
		if (Func(input)) res++;
	}
	cout << res;
}