#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<long long> v;
	
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int res = 0;
	if (n == 2)
	{
		res = v[0] * v[1];
	}
	else if (n == 1)
	{
		res = v[0] * v[0];
	}
	else
	{
		long long max = *max_element(v.begin(), v.end());
		long long min = *min_element(v.begin(), v.end());
		res = max * min;
	}
	

	cout << res;
}