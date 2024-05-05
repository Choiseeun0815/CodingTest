#include <iostream>
using namespace std;

int main()
{
	string str[5];
	int maxLength = 0;
	for (int i = 0; i < 5; i++)
		cin >> str[i];

	for (int i = 0; i < 5; i++)
	{
		if (str[i].length() > maxLength) maxLength = str[i].length();
	}

	for (int i = 0; i < maxLength; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j].length() <= i) continue;
			cout << str[j][i];
		}
	}
}
