#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() 
{
	int num, cnt = 0, res = INT_MAX;
	cin >> num;

	//5킬로그램을 우선적으로 묶을 수 있는 경우의 수를 탐색
	for (int i = num / 5; i >= 1; i--)
	{
		if (((num - (5 * i)) % 3 == 0))
		{
			cnt = i + (num - 5 * i) / 3;

			res = min(res, cnt);
		}
	}

	//res의 값(INT_MAX)에 변동이 없다면
	//위의 for문에서 경우의 수를 찾지 못했다는 뜻이므로,
	if (res == INT_MAX)
	{
		if ((num % 3 == 0))
		{
			res = num / 3;
		}
		else
		{
			res = -1;
		}
	}

	cout << res;
}
