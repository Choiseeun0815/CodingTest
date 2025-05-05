#include <iostream>
#include <deque>
#include <vector>
using namespace std;

struct Balloon {
    int index; int move;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    deque<Balloon> dq;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        dq.push_back({ i, m });
    }

    while (!dq.empty())
    {
        Balloon b = dq.front();
        cout << b.index << ' ';
        dq.pop_front();

        if (dq.empty()) break;

        int move = b.move;
        
        if (move > 0)
        {
            for (int i = 0; i < move - 1; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            for (int i = 0; i < -move; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
}