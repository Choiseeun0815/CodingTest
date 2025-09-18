#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	int N = nums.size() / 2;

	set<int> s;
	for (int i = 0; i < nums.size(); i++)
	{
		s.insert(nums[i]);
	}
	
	if (s.size() >= N)
		answer = N;
	else answer = s.size();

	return answer;
}
