#include <algorithm>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
	int answer = 0;
	int currentIndex = 0;

	for (int i = 0; i < section.size(); i++)
	{
		if (currentIndex > n) break;
		if (section[i] < currentIndex) continue;

		int min_num = min(section[i], n - m + 1);
		currentIndex = min_num + m;
		answer++;
	}

	return answer;
}