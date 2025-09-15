#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	set<int> s1;
	
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			int sum = numbers[i] + numbers[j];
			s1.insert(sum);
		}
	}
	
	for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
	{
		answer.push_back(*i);
	}
	return answer;
}