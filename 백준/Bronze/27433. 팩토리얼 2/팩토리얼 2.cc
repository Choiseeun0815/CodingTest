#include <iostream> 
using namespace std;

long long factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	cout << factorial(n);
}