#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}
long long multiple_gcd(vector<int> v)
{
	long long res = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		res = gcd(res, v[i]);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n, s, num;
	cin >> n >> s;

	vector<int> distance;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		distance.push_back(abs(s - num));
	}

	cout<<multiple_gcd(distance);
}