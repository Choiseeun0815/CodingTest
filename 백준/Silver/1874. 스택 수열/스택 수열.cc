#include <iostream> 
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, num;
	cin >> n;
	int max = n;

	bool isPossible = true;
	stack<int> s;
	vector<char> v;
	int  i = 1;
	while (true)
	{
		if (n <= 0 || !isPossible) break;
		cin >> num;
		while (true)
		{
			if (!s.empty() && s.top() == num)
			{
				v.push_back('-');
				s.pop();
				break;
			}
			else
			{
				v.push_back('+');
				s.push(i);
				if (i > max) 
				{
					//top이 num이 아니기에
					//현재 push를 해야하는 상황에, i가 이미 최대치를 넘긴 상태라면
					//수열이 만들어지지 않는 구조.
					isPossible = false;
					break;
				}
				else i++;
			}
		}
		n--;
	}

	if (isPossible)
	{
		for (char c : v)
		{
			cout << c << '\n';
		}
	}
	else cout << "NO";
}