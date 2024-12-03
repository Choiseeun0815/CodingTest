#include <iostream>
using namespace std;

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;

    // 세 각이 180이 되지 않으면 Error 출력
    if (a + b + c != 180) {
        cout << "Error";
    }
    else if (a == b && b == c) {
        // 세 각이 모두 같으면 Equilateral
        cout << "Equilateral";
    }
    else if (a == b || b == c || a == c) {
        // 두 각이 같으면 Isosceles
        cout << "Isosceles";
    }
    else {
        // 세 각이 모두 다르면 Scalene
        cout << "Scalene";
    }
	
}