#include <iostream>
using namespace std;

int main() 
{
	int a1, a0, c, n0, res = 1;
	cin >> a1 >> a0 >> c >> n0;

	//임의의 상한을 1000으로 두고 반복하여 체크
	for (int i = n0; i < 1000; i++)
	{
		if ((a1 * i + a0) > c * i)
		{
			res = 0;
			break;
		}
	}

	cout << res;
}
