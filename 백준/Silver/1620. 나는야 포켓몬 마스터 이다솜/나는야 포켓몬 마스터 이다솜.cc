#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	//키-> 포켓몬 이름, 값-> 포켓몬 번호
	unordered_map<string, int> originalMap;
	//키-> 포켓몬 번호, 값-> 포켓몬 이름
	unordered_map<int, string> reversedMap;

	for (int i = 1; i <= n; i++)
	{
		string input;
		cin >> input;
		originalMap[input] = i;
	}
	
	for (const auto& pair : originalMap)
	{
		reversedMap[pair.second] = pair.first;
	}

	vector<string> res;
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		try 
		{
			int parse = stoi(input);
			//입력값을 정수로 변환 가능하다면,(포켓몬 번호를 key로 사용)
			if (reversedMap.find(parse) != reversedMap.end())
				res.push_back(reversedMap.find(parse)->second);
		}
		catch (const std::invalid_argument&)
		{
			//입력값이 정수로 변환 불가능하다면,(포켓몬 이름을 key로 사용)
			if (originalMap.find(input) != originalMap.end())
				res.push_back(to_string(originalMap.find(input)->second));
		}
	}

	for (auto it : res)
		cout << it << '\n';
}