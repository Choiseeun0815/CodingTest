#include <iostream>
#include <cmath>
using namespace std;

int func(int input)
{
	int res = 4; //초기 상태의 점은 4개
	int area = 0; //input에 따라 생성되는 사각형의 수(넓이)
	int side = 0; //한 변의 사각형의 수(길이)
	for (int i = 0; i < input; i++)
	{
		side = pow(2, i);
		area = side * side; //1번의 경우 4개의 사각형 생성
		res += 5 + (4 * 2 * (side - 1)) + (3 * (area - (2 * side - 1))); // 수를 계속해서 누적
	}

	return res;
}
int main() 
{
	int N;
	cin >> N;

	cout << func(N);
}