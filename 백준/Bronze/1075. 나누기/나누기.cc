#include <iostream> 
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, f;
	cin >> n >> f;

	int num = n - (n % 100); // 뒷 두자리 수 제거한 상태
	string ans = "";
	while (true)
	{
		if (num % f == 0)
		{
			string s = to_string(num);
			ans = s.substr(s.size() - 2);
			break;
		}
		num++;
	}

	cout << ans;
}