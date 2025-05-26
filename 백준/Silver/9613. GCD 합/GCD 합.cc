#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n, sum = 0;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;

		for (int j = 0; j < m ; j++)
		{
			int num;
			cin >> num;

			v.push_back(num);
		}
		for (int j = v.size() - 1; j >= 1; j--)
		{
			for (int k = 0; k < j; k++)
			{
				int res = gcd(v[j], v[k]);
				//cout << "gcd 결과 : " << res << endl;
				sum += res;
			}
		}
		cout << sum << '\n';
		sum = 0;
		v.clear();
	}
}