#include <iostream>
using namespace std;

int GCD(int a, int b)
{
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
	//a -> 분자, b -> 분모
	int a1, a2, b1, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	//통분을 위해 분자에 각 분모를 곱해줌
	a1 *= b2;
	a2 *= b1;

	//통분 후 덧셈을 수행한 분자 및 분모
	int a = a1 + a2;
	int b = b1 * b2;

	//분자와 분모의 최대공약수를 구하기
	int divisionNum = GCD(a, b);
	
	cout << a / divisionNum << ' ' << b / divisionNum;
}