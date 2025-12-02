#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

struct Point //번호에 따른 좌표를 담을 구조체
{
	int x, y;
};
double GetDistance(Point hand, Point target)
{
	return abs(hand.x - target.x) + abs(hand.y - target.y);
}
string solution(vector<int> numbers, string hand) {
	string answer = "";
	map<int, Point> points = //각 키패드 번호에 따른 다이얼 위치(x, y)
	{ {1, {0,0}}, {2, {0,1}}, {3,{0, 2}},
		{4, {1, 0}}, {5, {1, 1}}, {6, {1, 2}},
		{7, {2, 0} }, {8,{2,1}}, {9, {2,2}}, {0, {3,1}} };

	Point currentL = { 3, 0 }, currentR = { 3,2 }; //*과 # 위치로 왼손/오른손 초기화
	
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
		{
			answer += "L";
			currentL = { points[numbers[i]] };
		}
		else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
		{
			answer += "R";
			currentR = { points[numbers[i]] };
		}
		else //2, 5, 8, 0에 대해 진행
		{
			double distanceL = GetDistance(currentL, points[numbers[i]]);
			double distanceR = GetDistance(currentR, points[numbers[i]]);

			if (distanceL < distanceR)
			{
				answer += "L";
				currentL = { points[numbers[i]] };
			}
			else if (distanceR < distanceL)
			{
				answer += "R";
				currentR = { points[numbers[i]] };
			}
			else //거리가 같으면 주로 사용 하는 손으로 누르기
			{
				if (hand[0] == 'r')
				{
					answer += "R";
					currentR = { points[numbers[i]] };
				}
				else 
				{
					answer += "L";
					currentL = { points[numbers[i]] };
				}
			}
		}
	}
	return answer;
}