#include <iostream>
using namespace std;

int main() 
{
	long long n;
	cin >> n;

	//수행 횟수는 n*n과 같으며, 다항식으로 나타냈을 때 T(n)=x^2로, 최고차항의 차수는 2이다.
	cout << n * n << endl << 2;
}
