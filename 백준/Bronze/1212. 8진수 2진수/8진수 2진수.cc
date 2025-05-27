#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Func(string s)
{
	string res = "";
	string s1 = "";
	for (int i = 0; i < s.size(); i++)
	{
		int num = s[i] - '0';
		while (true)
		{
			if (num == 0) {
				s1 += to_string(num); break;
			}
			s1 += to_string(num % 2);
			num /= 2;
		}
		reverse(s1.begin(), s1.end());

		if (s1.size() < 3)
		{
			while (s1.size() != 3)
			{
				s1 = "0" + s1;
			}
		}
		if (s1.size() > 3)
		{
			int pos = s1.find_first_not_of('0');
			s1 = s1.substr(pos);
		}
		res += s1;
		s1 = "";
	}
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

	cout<< Func(s);
}