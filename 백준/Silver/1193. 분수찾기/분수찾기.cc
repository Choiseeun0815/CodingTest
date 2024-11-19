#include <iostream>
using namespace std;

void GetStartNum(int input, int& start_num, int& end_num)
{
	int i = 1, j = 2;
	while (true)
	{
		if (input == 1) break;

		start_num += i;
		end_num += j;

		if (input >= start_num && input <= end_num)
		{
			break;
		}
		i++; j++;
	}
}
int main() 
{
	int X;
	int start_num = 1, end_num = 1;
	
	cin >> X;

	//입력받은 X번째의 분수가 존재하는 범위의 시작 지점을 알기 위한 함수
	GetStartNum(X,start_num, end_num);
	int N = end_num - start_num + 1; //몇 번째 대각선인지에 대한 정보

	int a = N, b = 1;
	while (start_num != X)
	{
		a--; b++;
		start_num++;
	}

	if (N % 2 == 1) //N이 홀수일 때, 
	{
		cout << a << "/" << b;
	}
	else //N이 짝수일 때, 
	{
		cout << b << "/" << a;
	}
}