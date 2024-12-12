#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    //만일 y(second)좌표가 같다면, 
    if (a.second == b.second)
        //x(first)좌표를 기준으로 오름차순 정렬
        return a.first < b.first;

    //y(second)좌표를 기준으로 오름차순 정렬
    return a.second < b.second;
}
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

    sort(point.begin(), point.end(), cmp);

    for (int i = 0; i < N; i++)
    {
        cout << point[i].first << " " << point[i].second << '\n';
    }
}
