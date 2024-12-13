#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end(), [](string& a, string& b)
		{
			if (a.size() == b.size())
			{
				//a가 b보다 사전적으로 앞서있다면, 
				if (a < b)
					return a < b;
				else return b > a;
			}
			//길이를 기준으로 오름차순으로 정렬
			return a.size() < b.size();
		}
	);

	for (int i = 0; i < n; i++)
	{
		if ((i != n - 1) && v[i] == v[i + 1])
			continue;
		cout << v[i] << '\n';
	}
}