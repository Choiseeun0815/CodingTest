#include <string>
#include <vector>

using namespace std;

int solution(int n)  //에라토스 테네스의 체 기법
{
	vector<bool> isPrime(n + 1, true); //벡터를 모두 true로 초기화
	isPrime[0] = isPrime[1] = false; //0과 1은 모두 소수 X

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < isPrime.size(); i++)
	{
		if (isPrime[i]) answer++;
	}
	return answer;
}