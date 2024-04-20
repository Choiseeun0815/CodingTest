#include <iostream>
using namespace std;

int main()
{
	int N, cnt = 0;
	cin >> N;

	string s; 
	cin >> s;

	for (int i = 0; i < N; i++) {
		if (s[i] == '0') continue; //불필요한 연산 시간을 줄이기 위함
		cnt += (int)s[i] - 48; //아스키 코드를 사용
	}
	cout << cnt;
}