#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> record) 
{
	vector<string> answer;
	map<string, string> uid_name;
	vector<pair<string, string>> uid_command;
	
	for (int i = 0; i < record.size(); i++)
	{
		istringstream ss(record[i]);
		string str;
		vector<string> vec;
		while (getline(ss, str, ' '))
		{
			vec.push_back(str); //분리된 string 저장
			//vec[0] = enter/leave, vec[1] = uid, vec[2] = name
		}
		if (vec.size() > 2) //uid에 따른 이름을 계속 변경(leave의 경우 닉네임 입력 없음)
			uid_name[vec[1]] = vec[2];

		uid_command.push_back({ vec[1], vec[0] });
	}
	for (const auto& [uid, command] : uid_command)
	{
		if (command == "Change") continue;
		string str = uid_name[uid] + "님이 ";
		if (command == "Enter")
			str += "들어왔습니다.";
		else if (command == "Leave")
			str += "나갔습니다.";
		answer.push_back(str);
	}
	return answer;
}