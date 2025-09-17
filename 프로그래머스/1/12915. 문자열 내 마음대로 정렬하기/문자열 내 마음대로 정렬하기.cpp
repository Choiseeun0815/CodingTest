#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n)
{
	vector<string> answer;

	sort(strings.begin(), strings.end(),
		[n](const string& a, const string& b)
		{
			if (a[n] == b[n])
				return a < b;
			return a[n] < b[n];
		});

	answer.assign(strings.begin(), strings.end());
	return answer;
}