#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = "";

	stringstream ss(s); //문자열 스트림
	vector<string> words;
	while (ss >> answer) //공백을 기준으로 분리된 문자를 words에 넣음
	{
		words.push_back(answer);
	}

	vector<int> v;
	for (string str : words)
	{
		int num = stoi(str);
		v.push_back(num);
	}
	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());

	answer = to_string(min) + " " + to_string(max);
	return answer;
}