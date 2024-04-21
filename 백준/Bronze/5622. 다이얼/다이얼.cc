#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;
	string dial[9] = {
		"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
	};

	string str; 
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < dial[j].length(); k++)
			{
				if (str[i] == dial[j][k])
				{
					cnt = cnt + 3 + j;
				}
			}
		}
	}
	cout << cnt;
}