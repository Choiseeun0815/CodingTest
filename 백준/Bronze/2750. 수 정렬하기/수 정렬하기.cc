#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int N;
	vector<int> matrix;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		matrix.push_back(input);
	}

	sort(matrix.begin(), matrix.end());

	for (int i = 0; i < matrix.size(); i++)
	{
		cout << matrix[i] << endl;
	}
}