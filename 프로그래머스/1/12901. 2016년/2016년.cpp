#include <string>
#include <vector>

using namespace std;
string solution(int a, int b) 
{
	string month[7] = { "FRI", "SAT", "SUN","MON","TUE","WED","THU" };
	int lastDay[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = 0;

	for (int i = 0; i < a - 1; i++)
	{
		days += lastDay[i];
	}
	days += (b - 1);

	int remain = days % 7;
	string answer = month[remain];
	return answer;
}
