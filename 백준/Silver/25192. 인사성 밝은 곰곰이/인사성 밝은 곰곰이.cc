#include <iostream> 
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, res = 0;
	cin >> n;

	unordered_set<string> nicknames;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (s == "ENTER")
			nicknames.clear();
		// 입력된 닉네임이 존재하지 않는다면,
		else if (nicknames.find(s) == nicknames.end())
		{
			nicknames.insert(s);
			res++;
		}
	}
	cout << res;
}