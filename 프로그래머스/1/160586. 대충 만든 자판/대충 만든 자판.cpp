#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
	vector<int> answer, res;
	int sum = 0;
	for (int i = 0; i < targets.size(); i++)
	{
		for (int j = 0; j < targets[i].size(); j++)
		{
			for (int k = 0; k < keymap.size(); k++)
			{
				auto it = keymap[k].find(targets[i][j]); //가장 앞에 있는 문자 찾기
				if (it != string::npos)
				{
					res.push_back(it + 1); 
				}
			}

			if (res.size() == 0) //한 글자라도 존재하지 않는다면 문장 생성 불가능
			{
				sum = -1;
				res.clear(); break;
			}
			else 
			{
				int min = *min_element(res.begin(), res.end());
				sum += min;
				res.clear();
			}
		}
		answer.push_back(sum);
		sum = 0; //초기화
	}
	return answer;
}