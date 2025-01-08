#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int n, m;

	cin >> n;
	unordered_map<int, int> cards;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		cards[input]++;
	}

	cin >> m;
	vector<int> vec;

	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}

	for (int i = 0; i < m; i++)
	{
		if (cards.find(vec[i]) != cards.end())
		{
			cout << 1 << ' ';
		}
		else cout << 0 << ' ';
	}
}