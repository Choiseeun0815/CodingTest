#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	
	// 약수의 개수가 홀수라면 해당 위치의 창문은 반드시 열린다.
	// 홀수인 경우는 해당 위치가 제곱수인 경우로,
	// n이하의 수에서 제곱수가 몇개인지를 구하면 된다.
	// 이 경우 sqrt를 사용하면 구할 수 있다.
	cout << (int)sqrt(n);
}