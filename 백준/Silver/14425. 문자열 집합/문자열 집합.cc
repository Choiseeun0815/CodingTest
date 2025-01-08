#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;
	unordered_map<string, int> S;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		S[input]++;
	}

	vector<string> vec;
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		vec.push_back(input);
	}

	for (int i = 0; i < m; i++)
	{
		if (S.find(vec[i]) != S.end())
		{
			cnt++;
		}
	}
	cout << cnt;
}