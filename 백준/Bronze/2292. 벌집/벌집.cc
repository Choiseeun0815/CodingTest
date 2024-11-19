#include <iostream>
using namespace std;


int main() 
{
	// N => 입력값
	// res => 결과를 저장할 변수. 시작을 포함하므로 1로 값을 초기화
	// num => 구한 규칙에 따라 범위의 최대값을 저장하기 위한 변수
	int N, res = 1, max_num = 1;
	cin >> N;

	while (true)
	{
		if (N == 1) break;

		if (N <= (res * 6) + max_num)
		{
			res++; // 끝을 포함하므로 break 전에 +1 연산을 추가 
			break;
		}
		max_num += res * 6;
		res++; // 목표 값에 도달할 때까지 시도한 횟수를 증가 
	}
	cout << res;
}