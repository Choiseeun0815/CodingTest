#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_multiset<string> vecP  (participant.begin(), participant.end());
	unordered_multiset<string> vecC(completion.begin(), completion.end());

	for (auto i = vecC.begin(); i != vecC.end();)
	{
		auto j = vecP.find(*i);
		if (j != vecP.end())
		{
			i = vecC.erase(i);
			vecP.erase(j);
		}
		else i++;
	}

	answer = *vecP.begin();
	return answer;
}