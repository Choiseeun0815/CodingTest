#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
	vector<int> answer;
	vector<int> topK;

	for (int i = 0; i < score.size(); i++)
	{
		topK.push_back(score[i]);
		int min = *min_element(topK.begin(), topK.end()); //최저 점수를 찾기
		if (topK.size() > k)
		{
			topK.erase(find(topK.begin(), topK.end(), min));
			min = *min_element(topK.begin(), topK.end()); //하위권 삭제 후 min 갱신
		}
		answer.push_back(min);
	}

	return answer;
}