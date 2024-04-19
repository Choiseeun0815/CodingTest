#include <iostream>
#include <algorithm>
using namespace std;

int ReadTestCase(string str); 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int input;
	cin >> input;

	string* testCase = new string[input];

	for (int i = 0; i < input; i++)
		cin >> testCase[i];

	for (int i = 0; i < input; i++)
	{
		cout << ReadTestCase(testCase[i]) << '\n';
	}
}

int ReadTestCase(string str)
{
	int CurrentDir = 0;
	int x = 0, y = 0;
	int minX = 0, maxX = 0, minY = 0, maxY = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'R')
		{
			CurrentDir++;
			if (CurrentDir > 3)
				CurrentDir = 0;
		}
		else if (str[i] == 'L') {
			CurrentDir--;
			if (CurrentDir < 0)
				CurrentDir = 3;
		}
		else if (str[i] == 'F') {
			if (CurrentDir == 0) {
				y++;
			}
			else if (CurrentDir == 2) {
				y--;
			}
			else if (CurrentDir == 1) {
				x--;
			}
			else if (CurrentDir == 3) {
				x++;
			}
		}
		else if (str[i] == 'B') {
			if (CurrentDir == 0) {
				y--;
			}
			else if (CurrentDir == 2) {
				y++;
			}
			else if (CurrentDir == 1) {
				x++;
			}
			else if (CurrentDir == 3) {
				x--;
			}
		}

		minX = min(minX, x); maxX = max(maxX, x);
		minY = min(minY, y); maxY = max(maxY, y);
	}

	int area = (maxX - minX) * (maxY - minY);
	return area;
}