#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int arr[1000001] = { 0, }; // 등장 횟수
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> nums(n);
	vector<int> ans(n, -1);
	stack<int> _stack;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
		arr[nums[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		// 빈도수 기준으로 비교
		while (!_stack.empty() && arr[nums[i]] > arr[nums[_stack.top()]])
		{
			ans[_stack.top()] = nums[i]; // ✅ 정답 위치는 인덱스
			_stack.pop();
		}
		_stack.push(i); // ✅ 스택에는 인덱스를 저장
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}
}
