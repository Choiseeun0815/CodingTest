#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, target; //N => 배열의 크기, target => 타겟 숫자
    cin >> N >> target;

    vector<int> vec;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    int sum = 0, cnt = 0, left = 0, right = 0;
    while (true)
    {
        if (sum >= target)
        {
            sum -= vec[left++]; //범위 축소
        }
        else if (right == N) //더 이상 순열 범위를 늘릴 수 없는 경우
        {
            break;
        }
        else
        {
            sum += vec[right++]; //범위 넓히기
        }

        if (sum == target) cnt++;
    }
    cout << cnt;
}