#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<pair<int, int>> point;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        point.push_back(make_pair(x, y));
    }

    sort(point.begin(), point.end());

    for (int i = 0; i < N; i++)
    {
        cout << point[i].first << " " << point[i].second << '\n';
    }
}
