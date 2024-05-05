#include <iostream>
using namespace std;

int main()
{
	int chessW[] = { 1,1,2,2,2,8 };

	int inputChessW[6] = { 0, };

	for (int i = 0; i <= 5; i++)
	{
		cin >> inputChessW[i];
	}

	for (int i = 0; i <= 5; i++)
	{
		cout << chessW[i] - inputChessW[i] << " ";
	}
}
