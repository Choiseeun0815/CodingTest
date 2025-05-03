#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
bool isVPS(string input)
{
	stack<char> s;
	for (char c : input)
	{
		if (c == '(')
		{
			s.push(c);
		}
		else 
		{
			// 닫는 괄호 이전에 열린 괄호에 대한 정보가 없다면 false
			if (s.empty()) return false;
			s.pop(); //있다면 한 쌍이 이루어진 것이므로 pop
		}
	}

	// s가 비어있지 않으면 VPS X이므로 false 반환
	return s.empty();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int k;
	cin >> k;
	vector<bool> res;
	for (int i = 0; i < k; i++)
	{
		string input;
		cin >> input;

		res.push_back(isVPS(input));
	}
	for (bool s : res)
		cout << (s ? "YES\n" : "NO\n");
}