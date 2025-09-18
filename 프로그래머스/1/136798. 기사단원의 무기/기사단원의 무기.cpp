#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
	int answer = 0;

	for (int i = 1; i <= number; i++)
	{
		int cnt = 0;
		for (int j = 1; j * j <= i; j++) //제곱근까지 약수의 수 구하기
		{
			if (i % j == 0)
			{
				cnt++;
				if (j * j != i) // 3 * 3과 같은 동일한 약수 방지
					cnt++;
			}
		}
		if (cnt > limit)
			answer += power;
		else answer += cnt;
	}
	return answer;
}
