#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());


	int a = stoi(A); int b = stoi(B);

	int res = (a >= b) ? a : b;

	cout << res;
}