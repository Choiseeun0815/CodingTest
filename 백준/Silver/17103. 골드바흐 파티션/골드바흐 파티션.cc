#include <iostream>
#include <vector>
using namespace std;

int Func(int target)
{
	vector<bool> isPrime(target + 1, true);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= target; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= target; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
	int cnt = 0;
	for (int i = 2; i <= target / 2; i++)
	{
		if (isPrime[i] && isPrime[target - i])
		{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	vector<int> targetNums;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		targetNums.push_back(input);
	}

	for (int i = 0; i < targetNums.size(); i++)
	{
		cout << Func(targetNums[i]) << '\n';
	}
}
