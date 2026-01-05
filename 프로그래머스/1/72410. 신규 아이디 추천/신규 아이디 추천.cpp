#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

string solution(string arr) 
{
	string answer = "";
	vector<char> vec = { '-', '_','.' };
	list<char> myList(arr.begin(), arr.end());
	// 1단계
	for (auto it = myList.begin(); it != myList.end(); it++)
	{
		if (isalpha(*it) != 0 && isupper(*it) != 0) //알파벳이면서 대문자라면
		{
			*it = tolower(*it); //소문자 치환
		}
	}
	// 2단계
	for (auto it = myList.begin(); it != myList.end();)
	{
		if (isalnum(*it) == 0 && find(vec.begin(), vec.end(), *it) == vec.end())
			it = myList.erase(it); //해당 원소 삭제
		else  it++;
		if (myList.size() == 0) break;
	}
	// 3단계
	for (auto it = myList.begin(); it != myList.end();)
	{
		auto nextIt = next(it);
		if (nextIt == myList.end()) break;
		if (*it == '.' && *nextIt == '.')
			it = myList.erase(it);
		else it++;
		if (myList.size() == 0) break;
	}
	// 4단계
	if (myList.size() > 0)
	{
		auto it = myList.begin();
		if (*it == '.') myList.erase(it);
	}
	if (myList.size() > 0) 
	{
		auto it = prev(myList.end());
		if (*it == '.') myList.erase(it);
	}
	// 5단계
	if (myList.size() == 0)
		myList.push_back('a');
	// 6단계
	if(myList.size() >= 16)
	{
		while (myList.size() > 15)
		{
			auto it = prev(myList.end());
			myList.erase(it);
		}
	}
	auto it = prev(myList.end());
	if (*it == '.') myList.erase(it);
	// 7단계
	if (myList.size() <= 2)
	{
		auto it = prev(myList.end());
		while (myList.size() != 3)
		{
			myList.push_back(*it);
		}
	}
	for (auto it = myList.begin(); it != myList.end(); it++)
		answer += *it;
	return answer;
}

