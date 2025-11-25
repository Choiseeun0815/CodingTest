#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
	set<int> s;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			if (i == j) continue;
			s.insert(arr[i] + arr[j]);
		}
	}
	vector<int> vec(s.begin(), s.end());
	return vec;
}