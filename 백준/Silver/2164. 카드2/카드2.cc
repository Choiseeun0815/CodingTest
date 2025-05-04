#include <iostream>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(i + 1);
    }
    
    while (true)
    {
        // 앞 원소 제거
        if(dq.size() >=2)
            dq.pop_front();
        if (dq.size() == 1) break;
        // 제거 후 제일 앞에 있던 원소를 뒤로 보냄
        dq.push_back(dq.front());
        if(dq.size() >=2)
         dq.pop_front();
    }
    cout << dq.front();
}