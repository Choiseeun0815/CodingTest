#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n, inputX, inputY, res;
	cin >> n;

	//n개의 점의 좌표를 저장할 vector
	vector<int> x, y, minPoint, maxPoint;

	for (int i = 0; i < n; i++)
	{
		cin >> inputX >> inputY;
		x.push_back(inputX); y.push_back(inputY);
	}

	//각 좌표를 오름차 순으로 정렬하여 좌표의 최대값과 최소값을 확보
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	// 벡터 minPoint와 maxPoint에 각각 대응하는 x, y값을 저장
	minPoint.push_back(x[0]); minPoint.push_back(y[0]);
	maxPoint.push_back(x[x.size() - 1]); maxPoint.push_back(y[y.size() - 1]);

	res = (maxPoint[0] - minPoint[0]) * (maxPoint[1] - minPoint[1]);
	cout << res;
}