#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int input;
    vector<int> v;
    cin >> input;

    while (input > 0)
    {
        int num = input % 10;
        v.push_back(num);
        input /= 10;
    }

    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
