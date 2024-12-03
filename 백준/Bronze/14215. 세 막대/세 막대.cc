#include <iostream>
using namespace std;

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;

	// a + b > c를 만족하지 않는다면, 
	if (!((a + b) > c))
	{
		c = (a + b) - 1;
	}
	else if (!((b + c) > a))
	{
		a = (b + c) - 1;
	}
	else if (!((a + c) > b))
	{
		b = (a + c) - 1;
	}
	cout << a + b + c;
}
