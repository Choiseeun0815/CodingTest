#include <iostream> 
#include <vector>
using namespace std;

long long func( int n, int r)
{
	long long res = 1;
	for (int i = 1; i <= r; i++)
	{
		res *= (n - i + 1);
		res /= i;
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	long long t;
	cin >> t;

	vector<long long> westSide, eastSide;
	for (int i = 0; i < t; i++)
	{
		long long x, y;
		cin >> x >> y;
		westSide.push_back(x); eastSide.push_back(y);
	}

	for (int i = 0; i < t; i++)
	{
		cout << func(eastSide[i], westSide[i]) << '\n';
	}
}