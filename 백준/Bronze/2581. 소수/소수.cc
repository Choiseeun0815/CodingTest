#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool Func(int num)
{
	if (num <= 1) return false;

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main() 
{
	int m, n, max = 0, sum = 0;
	vector<int> v;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (Func(i)) //소수라면, 
		{
			v.push_back(i);
		}
	}

	if (v.size() == 0) //소수가 없을 경우 -1을 출력
	{
		cout << -1;
	}
	else 
	{
		for (int i = 0; i < v.size(); i++)
			sum += v[i];

		sort(v.begin(), v.end());
		max = v[0];

		cout << sum << endl << max;
	}
	
}