#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	
	vector<int> cards;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		cards.push_back(input);
	}

	cin >> m;
	unordered_map<int, int> cmp;
	vector<int> inputSequence;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		inputSequence.push_back(input); //입력 순서를 참고하기 위함
		cmp[input] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		auto it = cmp.find(cards[i]);
		if (it != cmp.end())
		{
			it->second++;
		}
	}

	for (int i = 0; i < m; i++)
	{
		cout << cmp[inputSequence[i]] << ' ';
	}

}