#include <iostream>
#include <vector>
using namespace std;

void Func(int n, int& res)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) sum++;
	}
	if (sum == 2) res++;
}
int main() 
{
	int n;
	int res = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		Func(v[i], res);
	}

	cout << res;
}