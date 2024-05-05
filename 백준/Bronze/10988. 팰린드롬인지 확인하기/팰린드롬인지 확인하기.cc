#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str, cmpStr;
	cin >> str;
	cmpStr = str;

	for (int i = 0; i < sizeof(str) / sizeof(string); i++)
	{
		reverse(str.begin(), str.end());
	}

	if (str == cmpStr)
		cout << 1;
	else cout << 0;
}
