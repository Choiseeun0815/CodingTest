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

	vector<int> inputs; //수열을 저장할 벡터
	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		inputs.push_back(a); arr.push_back(0);
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = inputs[i];
		for (int j = 0; j < i; j++)
		{
			if (inputs[j] < inputs[i] && arr[i] < arr[j] + inputs[i])
				arr[i] = arr[j] + inputs[i];
		}
	}

	cout << *max_element(arr.begin(), arr.end());
}