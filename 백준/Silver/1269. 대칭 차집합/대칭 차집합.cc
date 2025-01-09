#include <iostream>
#include <set>
using namespace std;

void func(set<int>& mySet, int size)
{
	for (int i = 0; i < size; i++)
	{
		int input;
		cin >> input;
		mySet.insert(input);
	}
}
int Difference(set<int> original, set<int> compare)
{
	int cnt = 0;
	for (const auto& it : compare)
	{
		//찾으려는 값이 original에 없다면, 
		if (original.find(it) == original.end())
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	int n, m;
	cin >> n >> m;

	set<int> A;
	set<int> B;

	func(A, n); func(B, m);

	cout << Difference(A, B) + Difference(B, A);
}