#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int g = gcd(a, b); //최대 공약수
	int l = g * (a / g) * (b / g); //최소 공배수

	cout << g << '\n' << l;
}