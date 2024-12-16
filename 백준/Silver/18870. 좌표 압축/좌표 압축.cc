#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	vector<int> copy = vec;
	sort(copy.begin(), copy.end());

	unordered_map<int, int> rank;
	int cnt = 0;
	for (int i = 0; i < copy.size(); i++)
	{
		//find()를 통해 찾고자 하는 key가 존재하지 않는다면, 
		//rank.end()를 반환하게 됨
		if (rank.find(copy[i]) == rank.end())
		{
			rank[copy[i]] = cnt++;
		}
	}

	for (int i = 0; i < n; i++)
		vec[i] = rank[vec[i]];

	for (int i = 0; i < n; i++) {
		cout << vec[i] << ' ';
	}
}