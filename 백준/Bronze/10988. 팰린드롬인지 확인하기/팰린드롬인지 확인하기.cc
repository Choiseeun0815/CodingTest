#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
	string str, cmpStr;
	cin >> str;
	cmpStr = str;

	reverse(str.begin(), str.end());

	if (str == cmpStr)
		cout << 1;
	else cout << 0;

}