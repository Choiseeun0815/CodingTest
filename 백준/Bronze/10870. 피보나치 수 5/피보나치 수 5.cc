#include <iostream> 
using namespace std;

int Func(int num1, int num2, int targetNum)
{
	if (targetNum == 0) return 0;

	int res = num2;
	if (targetNum <= 1) return res;
	int sum = num1 + num2;
	return Func(num2, sum, --targetNum);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	cout<< Func(0, 1, n); //피보나치 수는 0과 1로 시작
}