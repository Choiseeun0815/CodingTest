#include <iostream> 
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;

	map<string, int> words;

	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;

		if (name.length() >= m)
			words[name]++;
	}

	vector<pair<string, int>> v(words.begin(), words.end());
	sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
		if (a.second != b.second) return a.second > b.second;
		else if (a.first.length() != b.first.length()) return a.first.length() > b.first.length();
		return a.first < b.first;
		}
	);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << '\n';
	}
}