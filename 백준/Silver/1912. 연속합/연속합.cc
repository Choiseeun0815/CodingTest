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
	vector<int> arr;
	vector<int> D;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}

	D.push_back(arr[0]);
	for (int i = 1; i < n; i++)
	{
		int a = arr[i];
		int b = D[i - 1] + a;
		D.push_back(max(a, b)); //a와 b중 더 큰 수를 arr에 삽입
	}

	cout << *max_element(D.begin(), D.end());
}