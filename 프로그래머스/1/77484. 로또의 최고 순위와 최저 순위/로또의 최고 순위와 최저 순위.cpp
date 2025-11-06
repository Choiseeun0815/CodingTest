#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
	vector<int> answer;
	int cnt_zero = 0, win = 0;

	for (int i = 0; i < lottos.size(); i++)
	{
		if (lottos[i] == 0)
		{
			cnt_zero++; continue;
		}

		if (std::find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) // 당첨 번호 존재
		{
			win++; //당첨 번호의 수
		}
	}

	answer = { min(7 - (cnt_zero + win), 6) , min(7 - win, 6) };
	return answer;
}
