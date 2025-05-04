#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> s;
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        q.push(input);
    }

    for (int i = 1; i <= n; i++)
    {
        while (true)
        {
            //현재 차례에 맞는 번호가
            //큐의 back() 또는 스택의 top()에 있을 경우, while문 종료
            if (!q.empty() && q.front() == i)
            {
                q.pop(); break;
            }
            if (!s.empty() && s.top() == i)
            {
                s.pop(); break;
            }

           // 스택과 큐의 각각 top과 front에 요구하는 차례의 번호가 없을 경우,
            if (q.empty()) //q가 비어있다면,
            {
                // 간식을 받을 수 없으므로 sad 출력 후 리턴
                cout << "Sad"; return 0;
            }
            else
            {
                //큐가 비어있지 않다면, 스택에 큐에 대한 정보를 넣은 후, 큐에서 pop 
                s.push(q.front()); //큐의 앞에 있던 수를 스택에 넣음
                q.pop(); //스택으로 이동한 수를 pop
            }
        }

        //while문 종료 후,
        // 큐와 스택이 모두 비워졌을 경우 간식을 받을 수 있다고 판단. 
        if (q.empty() && s.empty()) {
            cout << "Nice"; return 0;
        }
    }
}