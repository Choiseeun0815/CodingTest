#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <cstdio>
using namespace std;
int main() 
{
	int N;
	scanf("%d", &N);

	vector<int> v(10001, 0);

	for (int i = 0; i < N; i++)
	{
		int input;
		scanf("%d", &input);
		v[input]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		while (v[i] > 0)
		{
			printf("%d\n", i);
			v[i]--;
		}
	}
}