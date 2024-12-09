#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int N, num = 0, cnt = 0;
	cin >> N;

	while (true)
	{
		num++;

		//현재 숫자에서 "666"이 포함되어 있다면, 
		if (to_string(num).find("666") != string::npos)
		{
			cnt++; 
			if (cnt == N)
			{
				cout << num;
				break;
			}
		}
	}
	
}
