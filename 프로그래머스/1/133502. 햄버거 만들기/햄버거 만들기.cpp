#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> ingredient) {
	int answer = 0;
	vector<int> vec; vec.reserve(ingredient.size()); //미리 용량 확보

	for(int i=0; i<ingredient.size(); i++)
	{
		vec.push_back(ingredient[i]);
		if (vec.size() >= 4)
		{
			int size = vec.size();
			if (vec[size - 4] == 1 && vec[size - 3] == 2 && vec[size - 2] == 3 && vec[size - 1] == 1)
			{
				vec.resize(size - 4);
				answer++;
			}
		}
	}
	return answer;
}