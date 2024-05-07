#include <iostream>
using namespace std;

int main()
{
	int N, B;
	string res = "";

	cin >> N >> B;

	while (N > 0)
	{
		int n = N % B;
		char c;

		//N을 B로 나눈 나머지가 10 이상이라면, 
		//이에 대해서는 알파벳 대문자로 표현해야하므로
		//if문 안의 연산을 실행함 
		if (n >= 10)
			c = 'A' + (n - 10);
		else
			c = '0' + n;

		res = c + res;
		N /= B;
	}

	cout << res;
}
