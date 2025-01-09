#include <iostream>
#include <vector>
#include <set>
using namespace std;

void func(set<string>& mySet, int size)
{
	for (int i = 0; i < size; i++)
	{
		string input;
		cin >> input;
		mySet.insert(input);
	}
}
int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;

	set<string> didnt_hear;
	set<string> didnt_see;

	set<string> res;
	func(didnt_hear, n);
	func(didnt_see, m);
	
	for (const auto& it : didnt_hear)
	{
		if (didnt_see.find(it) != didnt_see.end())
		{
			res.insert(it); cnt++;
		}
	}

	cout << cnt << '\n';
	for (const auto& it : res)
	{
		cout << it << '\n';
	}
}