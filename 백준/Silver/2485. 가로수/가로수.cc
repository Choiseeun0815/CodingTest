#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b)
{
	if (b > a)swap(a, b);
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int input, res = 0;
	cin >> input;

	vector<int> v, v_distance;
	for (int i = 0; i < input; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 1; i < input; i++)
	{
		int distance = v[i] - v[i - 1];
		v_distance.push_back(distance);
	}

	int gcd = v_distance[0];
	for (int i = 1; i < v_distance.size(); i++)
	{
		gcd = GCD(v_distance[i], gcd);
	}

	int currentPos = v[0];
	for (int i = 1; i < input;)
	{
		currentPos += gcd;
		if (currentPos != v[i])
		{
			res++;
		}
		else 
		{
			i++;
		}
	}
	cout << res;
}