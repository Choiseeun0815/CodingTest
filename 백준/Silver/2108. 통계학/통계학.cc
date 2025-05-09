#include <iostream> 
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v(8001,0);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	
	vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		nums.push_back(x);
		if (x < 0)
		{
			v[x * -1 + 4000]++;
		}
		else v[x]++;
	}

	double res, sum = 0;
	// 산술 평균 출력
	for (int i : nums)
		sum += i;
	res = static_cast<int>(round(sum / n));
	cout << res << '\n';

	// 중앙값 출력
	res = n / 2; // 인덱스
	sort(nums.begin(), nums.end());
	cout << nums[res] << '\n';

	// 최빈값 출력
	res = 0; //빈도수를 저장
	vector<int> s; //
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > res)
		{
			s.clear();
			res = v[i];
		}

		if (v[i] >= res)
		{
			if (i >= 4001)
			{
				s.push_back(4000 - i);
			}
			else s.push_back(i);
		}
	}
	sort(s.begin(), s.end());
	if (s.size() >= 2)
	{
		cout << s[1] << '\n'; //sort로 크기 정렬 후 두번째로 작은 값 출력
	}
	else cout << s[0] << '\n';

	// 최대값과 최솟값의 차이
	int max = *max_element(nums.begin(), nums.end());
	int min = *min_element(nums.begin(), nums.end());
	cout << max - min;
}