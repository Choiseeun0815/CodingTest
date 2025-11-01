#include <vector>
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n < 2) return false;
	if (n % 2 == 0) return n == 2; 
	for (int i = 3; i * i <= n; i += 2) //홀수에 대한 판단
	{
		if (n % i == 0) return false;
	}
	return true;
}
int solution(vector<int> nums)
{
	int answer = 0;
	int nums_len = nums.size();

	for (int i = 0; i < nums_len - 2; i++)
	{
		int sum = 0;
		for (int j = i + 1; j < nums_len - 1; j++)
		{
			for (int k = j + 1; k < nums_len; k++)
			{
				sum = nums[i] + nums[j] + nums[k];
				if (isPrime(sum))
					answer++;
			}
		}
	}

	return answer;
}