#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    deque<int> dq;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        switch (input)
        {
        case 1:
        {
            int x; cin >> x;
            dq.push_front(x); break;
        }
        case 2:
        {
            int x; cin >> x;
            dq.push_back(x); break; 
        }
        case 3: 
        {
            if (!dq.empty())
            {
                res.push_back(dq.front()); dq.pop_front();
            }
            else res.push_back(-1);
            break;
        }
        case 4:  
        {
            if (!dq.empty())
            {
                res.push_back(dq.back()); dq.pop_back();
            }
            else res.push_back(-1);
            break;
        }
        case 5:
            res.push_back(dq.size());
            break;
        case 6:
            if (dq.empty()) res.push_back(1);
            else res.push_back(0);
            break;
        case 7:
            if (!dq.empty()) res.push_back(dq.front());
            else res.push_back(-1); break;
        case 8:
            if (!dq.empty()) res.push_back(dq.back());
            else res.push_back(-1); break;
        default:
            break;
        }
    }
    for (int i : res)
        cout << i << '\n';
}