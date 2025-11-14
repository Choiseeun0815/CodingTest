#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = 0;
	set<int> lostSet(lost.begin(), lost.end());
	set<int> reserveSet(reserve.begin(), reserve.end());

	for (auto i = lostSet.begin(); i!= lostSet.end(); ) //분실에 대한 중복 작업
	{
		auto j = reserveSet.find(*i);
		if (j != reserveSet.end())
		{
			i = lostSet.erase(i);
			reserveSet.erase(j);
		}
		else i++;
	}

	for (auto i = reserveSet.begin(); i != reserveSet.end();)
	{
		int front = *i - 1;
		int back = *i + 1;

		auto j = lostSet.find(front);
		if (j != lostSet.end())
		{
			i = reserveSet.erase(i);
			lostSet.erase(j);
			continue;
		}
		
		auto j2 = lostSet.find(back);
		if(j2 != lostSet.end())
		{
			i = reserveSet.erase(i);
			lostSet.erase(j2);
			continue;
		}

		i++;
	}
	answer = n - lostSet.size();
	return answer;
}