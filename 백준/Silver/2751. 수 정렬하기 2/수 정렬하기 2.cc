#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;

	vector<int> matrix(N);
	for (int i = 0; i < N; i++)
	{
		cin >> matrix[i];
	}

	sort(matrix.begin(), matrix.end());

	for (int i = 0; i < N; i++)
	{
		cout << matrix[i] << '\n';
	}
}