#include <iostream>
using namespace std;

int main()
{
	string Croatia[] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int cnt = 0;
	bool isExist = false;
	string cmp = "", str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (i < str.length() - 1)
			cmp = str.substr(i, 2);

		if (i < str.length() - 2 && str.substr(i, 3) == "dz=")
		{
			cnt++;
			i += 2;
			continue;
		}

		for (int j = 0; j < sizeof(Croatia) / sizeof(string); j++)
		{
			if (Croatia[j] == cmp)
			{
				cnt++; 
				isExist = true;
				i++;
			}
		}

		if (!isExist)
		{
			cnt++;
		}
		isExist = false;
	}

	cout << cnt;
}
