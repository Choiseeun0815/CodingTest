#include <iostream>
using namespace std;

int main() 
{
	int x1, x2, x3, resX;
	int y1, y2, y3, resY;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2) resX = x3;
	else if (x2 == x3) resX = x1;
	else resX = x2;

	if (y1 == y2) resY = y3;
	else if (y2 == y3) resY = y1;
	else resY = y2;

	cout << resX << " " << resY;
}