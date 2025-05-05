#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n = 0;
    cin >> n;
    deque<int> q;
    vector<int> isQ;

    for (int i = 0; i < n; i++)
    {
        int  x; cin >> x;
        isQ.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (isQ[i] == 0)
        {
            q.push_back(x);
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        q.push_front(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << q.back() << ' ';
        q.pop_back();
    }
}