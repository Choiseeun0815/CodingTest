#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Func(int n)
{
	if (n == 0) return "0";
	string res;

	while (n != 0)
	{
		int num = n % -2;
		n /= -2;

		if (num < 0)
		{
			num += 2;
			n += 1;
		}
		res += to_string(num);
	}
	reverse(res.begin(), res.end());
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	cout << Func(n);
}