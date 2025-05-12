#include <iostream> 
#include <string>
#include <vector>
using namespace std;

int Func(string s)
{
	int cnt = 0;
	string check = "aeiouAEIOU";
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < check.length(); j++)
		{
			if (s[i] == check[j])
			{
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	vector<int> v;
	while (true)
	{
		string s;
		getline(cin, s);

		if (s == "#") break;

		v.push_back(Func(s));
	}
	for (int i : v)
	{
		cout << i << '\n';
	}
}