#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	
	vector<int> A;
	vector<int> D; //누적 수열 증가량을 저장할 배열
	vector<int> v; //역추적을 위해 사용할 배열
	for (int i = 0; i < n; i++)
	{
		int a; cin >> a;
		A.push_back(a);
		D.push_back(0); //A의 사이즈만큼 배열 D를 모두 0으로 초기화
		v.push_back(-1);
	}

	D[0] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			int a = D[j] + 1;

			if (A[i] > A[j])
			{
				if (a > D[i]) {
					D[i] = a;
					v[i] = j; //정보 갱신에 있어서 영향을 준 인덱스를 저장
				}

			}
		}
		if (D[i] == 0)
		{
			v[i] = -1;
			D[i] = 1;
		}
	}
	auto it = max_element(D.begin(), D.end()); //이터레이터를 반환
	int idx = distance(D.begin(), it); //max 값의 주소지를 알기 위함
	
	cout << *it << '\n'; //최대 수열 길이 값 출력

	vector<int> res;
	for (int i = idx; i != -1; i = v[i]) 
	{
		res.push_back(A[i]);
	}
	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << res[i] << ' ';
	}
}