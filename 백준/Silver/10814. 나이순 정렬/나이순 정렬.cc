#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> p(n);
	for (int i = 0; i < n; i++)
	{
		int age; string name;
		cin >> age >> name;
		p[i] = make_pair(age, name);
	}

	//나이를 기준으로 오름차 정렬
	stable_sort(p.begin(), p.end(), [](const pair<int, string>& a, const pair<int, string>& b)
		{
			return a.first < b.first;
		}
	);

	for (int i = 0; i < n; i++)
		cout << p[i].first << ' ' << p[i].second << '\n';
}