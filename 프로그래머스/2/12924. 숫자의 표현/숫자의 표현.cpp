
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 1; //15 = 15에 대한 경우를 미리 적용
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum = i;
		for (int j = i + 1; j < n; j++)
		{
			sum += j;
			if (sum == n)
			{
				answer++;
				break;
			}
			if (sum > n)
			{
				break;
			}
		}
	}
	return answer;
}