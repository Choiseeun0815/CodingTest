#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Func(string s)
{
	// 세 자리를 단위로 끊어야 하기 때문에, 
	// 문자열의 크기가 3의 배수가 될 수 있도록 0을 붙임
	while (s.size() % 3 != 0)
	{
		s = "0" + s;
	}

	string res = "";
	for (int i = 0; i < s.size(); i += 3)
	{
		int v = 0;
		for (int j = 0; j < 3; j++)
		{
			v = v * 2 + (s[i + j] - '0');
		}
		res += to_string(v);
	}

	// 앞에 붙은 불필요한 0 제거
	int pos = res.find_first_not_of('0');
	if (pos == string::npos) return "0"; // 전부 0일 때
	return res.substr(pos);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	cout << Func(s);
}