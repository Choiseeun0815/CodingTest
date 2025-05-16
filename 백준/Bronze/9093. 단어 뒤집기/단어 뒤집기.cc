#include <iostream> 
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore(); //입력 버퍼에 남아있는 '\n'을 무시한다

	stack<char> s;
	while (n > 0)
	{
		string input;
		getline(cin, input);
		input += '*';

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == ' ' || input[i] == '*')
			{
				int size = s.size();
				for (int j = 0; j < size; j++)
				{
					char c = s.top();
					cout << c;
					s.pop();
				}
				cout << ' ';
			}
			else
				s.push(input[i]);
		}
		cout << '\n';
		n--;
	}
}