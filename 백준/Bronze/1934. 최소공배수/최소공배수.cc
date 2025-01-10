#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;

	vector<int> res;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;

		int bigger = max(a, b);
		int smaller = min(a, b);

		for (int j = 1; j <= smaller; j++)
		{
			int num = j * bigger;
			if (num % smaller == 0)
			{
				res.push_back(num); break;
			}
		}
	}
	
	for (const auto& it : res)
		cout << it << '\n';
}