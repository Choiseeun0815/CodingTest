#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v; //수열을 이곳에 저장
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
		arr.push_back(0); //0으로 모두 초기화
	}

	arr[0] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = i-1; j >= 0; j--)
		{
			int a  = arr[j] + 1;
			// 배열의 이전에 현재 원소보다 작은 수가 있는지 탐색
			// 있으면, 해당 누적된 수열의 길이에 +1 값 저장
			if (v[i] > v[j])
			{
				if(a > arr[i])
					arr[i] = arr[j] + 1;
			}
		}
		//위의 반복문을 거쳤는데 갱신되는 값이 없다면(0이라면) 수열 길이 1
		if (arr[i] == 0) arr[i] = 1;
	}

	cout << *max_element(arr.begin(), arr.end());
}