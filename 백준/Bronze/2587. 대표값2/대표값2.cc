#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> matrix(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> matrix[i];
		
	}

	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		sum += matrix[i];
	}

	sort(matrix.begin(), matrix.end());
	cout << sum / 5 << endl << matrix[2];
}