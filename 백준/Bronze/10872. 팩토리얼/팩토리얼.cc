#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, res = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n == 0) break;

        res *= i;
    }
    cout << res;
}