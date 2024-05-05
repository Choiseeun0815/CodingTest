#include <iostream>
using namespace std;

int main()
{
	int starCnt = 1;
	int input;
	cin >> input;

	for (int i = 1; i <= input * 2 - 1; i++)
	{
		for (int j = 0; j <abs(input - i); j++)
		{
			cout << " ";
		}
		for (int j = 0; j < starCnt; j++)
		{
			cout << "*";
		}

		if (i < input)
			starCnt += 2;
		else 
			starCnt -= 2;

		cout << '\n';
	}
	
}
