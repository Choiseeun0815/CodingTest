#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int N, K;
	cin >> N >> K;

	vector<int> matrix(N);
	for (int i = 0; i < N; i++)
	{
		cin >> matrix[i];
	}

	sort(matrix.rbegin(), matrix.rend());

	cout << matrix[K - 1];
}