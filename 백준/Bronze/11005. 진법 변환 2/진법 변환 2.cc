#include <iostream>
using namespace std;

int main() 
{
	int N, B;
	int remainder; // 나머지를 저장할 변수
	string res = "";

	cin >> N >> B;

	while (N > 0)
	{
		char c;
		remainder = N % B;

		if (remainder >= 10) //문자 변화가 필요한 경우
			c = 'A' + (remainder - 10);
		else
			c = '0' + remainder;

		res = c + res;
		N /= B;
	}
	cout << res;
	return 0;
}