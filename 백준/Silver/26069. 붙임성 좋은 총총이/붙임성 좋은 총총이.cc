#include <iostream> 
#include <set>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, res = 0;
	cin >> n;

	set<string> dancing;
	dancing.insert("ChongChong"); //총총이는 무조건 춤 춤

	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		//s1이 dancing에 있다면, 
		if (dancing.find(s1) != dancing.end())
		{
			dancing.insert(s2); //같이 만난 s2를 dancing에 넣음
		}
		//s2가 dancing에 있다면, 
		else if (dancing.find(s2) != dancing.end())
		{
			dancing.insert(s1); //같이 만난 s1을 dancing에 넣음
		}
	}
	cout << dancing.size();
}