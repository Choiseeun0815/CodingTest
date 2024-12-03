#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int a, b, c;
	vector<string> res;

	while (true)
	{
		cin >> a >> b >> c;

		if (a == 0 && a == b && b == c) break;
	
		int maxNum = max({ a, b, c });
		int elseNum = a + b + c - maxNum;

		if (!(elseNum > maxNum))
		{
			res.push_back("Invalid");
		}
		else if (a == b && b == c)
		{
			res.push_back("Equilateral");
		}
		else if (a == b || b == c || a == c)
		{
			res.push_back("Isosceles");
		}
		else
		{
			res.push_back("Scalene");
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << endl;
	}
}
