#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score)
{
	int answer = 0;
	vector<int> v;

	sort(score.begin(), score.end(), greater()); //사과 점수 내림차 정렬

	for (int i = 0; i < score.size();)
	{
		if ((score.size() - i) < m) break;
		for (int j = i; j < i + m; j++)
		{
			v.push_back(score[j]);
		}
		
		int min_price = *min_element(v.begin(), v.end());
		answer += (min_price * m);

		i += m;
		v.clear();
	}
	return answer;
}