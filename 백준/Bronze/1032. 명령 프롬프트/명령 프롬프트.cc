#include <iostream> 
#include <vector>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		v.push_back(input);
	}

	string ans = v[0];

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < v[0].length(); j++)
		{
			if (v[i][j] != ans[j])
			{
				ans[j] = '?';
			}
		}
	}
	cout << ans;
}