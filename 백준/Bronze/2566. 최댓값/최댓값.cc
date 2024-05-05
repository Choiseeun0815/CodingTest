#include <iostream>
using namespace std;

int main()
{
	int** arr = new int* [9];
	for (int i = 0; i < 9; i++)
	{
		arr[i] = new int[9];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	int max = arr[0][0], I = 0, J = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				I = i; J = j;
			}
		}
	}

	cout << max << '\n' << I + 1 << ' ' << J + 1;
}
