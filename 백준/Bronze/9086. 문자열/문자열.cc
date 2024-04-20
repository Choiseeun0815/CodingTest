#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	string* str = new string[T];

	for (int i = 0; i < T; i++)
		cin >> str[i];

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < str[i].length(); j++) {
			if (j == 0) //문자열의 첫 글자
				cout << str[i][j];
			if(j == str[i].length() - 1) //문자열의 마지막 글자
				cout << str[i][j];
		}
		cout << '\n';
	}
}