#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
	int answer = 0;
	int remain = 0; //교환 후 남은 빈 병을 저장할 변수

	while (n >= a) //교환이 가능한 상황일 때까지 반복
	{
		int coke = (n  / a) * b; //교환 후 새로 얻은 콜라
		remain = n % a;
		answer += coke;
		n = coke + remain;
	}
	return answer;
}