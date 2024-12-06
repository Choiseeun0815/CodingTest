#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n, m;
	vector<int> cards;
	vector<int> res;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		cards.push_back(input);
	}

	for (int i = 0; i < cards.size() - 2; i++)
	{
		for (int j = i + 1; j < cards.size() - 1; j++)
		{
			for (int k = j + 1; k < cards.size(); k++)
			{
				res.push_back(cards[i] + cards[j] + cards[k]);
			}
		}
	}
	sort(res.rbegin(), res.rend());

	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] <= m)
		{
			cout << res[i]; break;
		}
	}
}
