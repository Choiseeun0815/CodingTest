#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	string N;
	int B, res = 0, j = 0;

	cin >> N >> B;

	for (int i = N.length() - 1; i >= 0; i--)
	{

		if (N[i] >= 'A' && N[i] <= 'Z')
		{
			res += pow(B, j) * ((int)N[i] - 55);
		}
		else 
		{
			res += pow(B, j) * ((int)N[i]-48);
		}

		j++;
	}

	cout << res;
}
