#include <iostream> 
#include <cmath>
#include <vector>
using namespace std;

int Func(double x1, double y1, double r1, double x2, double y2, double r2) {
	double dx = x1 - x2;
	double dy = y1 - y2;
	double d = sqrt(dx * dx + dy * dy);

	if (d == 0 && r1 == r2) return -1; // 무한대
	else if (d == r1 + r2 || d == abs(r1 - r2)) return 1; // 외접 or 내접
	else if (abs(r1 - r2) < d && d < (r1 + r2)) return 2; // 교점 2개
	else return 0; // 만나지 않음
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	double x1, y1, r1, x2, y2, r2;
	
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		v.push_back(Func(x1, y1, r1, x2, y2, r2));
	}
	for (int i : v)
	{
		cout << i << '\n';
	}
}