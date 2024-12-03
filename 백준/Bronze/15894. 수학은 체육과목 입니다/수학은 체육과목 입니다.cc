#include <iostream>
using namespace std;

int main() 
{
	long long n, res;
	cin >> n;

	//3->가장 위에 있는 사각형의 변 수
	//n->가장 아래에 있는 사강형의 밑변 수
	//(n-1)*3 -> 위 두가지의 경우를 제외한 나머지 변의 수
	res = 3 + n + (n - 1) * 3;
	cout << res;
}