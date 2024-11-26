#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int Func(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0) return i;
	}
	return -1; //더 이상 소인수분해가 불가능한 경우 -1을 리턴
}
int main() 
{
	int n;
	vector<int> v;
	cin >> n;

	if (n != 1)
	{
		while (n > 1)
		{
			int input = Func(n);

			if (input != -1)
				v.push_back(input);

			n /= input;
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << endl;
		}
	}
}