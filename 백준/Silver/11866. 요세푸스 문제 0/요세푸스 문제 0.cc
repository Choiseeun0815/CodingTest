#include <iostream>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    deque<int> dq;
    deque<int> res;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(i + 1);
    }
    while (dq.size() != 0)
    {
        for (int i = 0; i < k - 1; i++)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        res.push_back(dq.front());
        dq.pop_front();
    }
    cout << "<";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i != res.size() - 1) cout << ", ";
    }
    cout << ">";
}