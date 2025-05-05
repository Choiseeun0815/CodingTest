#include <iostream>
#include <cmath>
using namespace std;

int Factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    
    cout << Factorial(n) / (Factorial(k) * Factorial(n - k));
}