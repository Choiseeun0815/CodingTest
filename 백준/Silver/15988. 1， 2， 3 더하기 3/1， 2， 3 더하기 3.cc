#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 1'000'000;
const int MOD = 1'000'000'009;
long long arr[MAX_SIZE + 1] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    vector<int> inputs(T);
    int max_n = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> inputs[i];
        if (inputs[i] > max_n) max_n = inputs[i];
    }

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for (int i = 4; i <= max_n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % MOD;
    }

    for (int i : inputs)
    {
        cout << arr[i] << '\n';
    }
}
