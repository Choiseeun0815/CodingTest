#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
	vector<string> answer;

	for (int i = 0; i < n; i++)
	{
		int wall = arr1[i] | arr2[i];

		stack<int> s;
		while (wall > 0)
		{
			s.push(wall % 2);
			wall /= 2;
		}

		while (s.size() != n) //변환된 2진수 길이를 n으로 맞추는 과정
		{
			s.push(0);
		}

		string binary = "";
		while (!s.empty())
		{
			if (s.top() == 1)
			{
				binary += "#";
			}
			else binary += " ";

			s.pop();
		}
		answer.push_back(binary);
	}
	
	return answer;
}