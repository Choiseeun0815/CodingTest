#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//내림차순 정렬(greater<>)
	map<string, string, greater<>> myMap;
	for (int i = 0; i < n; i++)
	{
		string name, info;
		cin >> name >> info;
		myMap[name] = info;
	}

	for (auto i = myMap.begin(); i != myMap.end(); i++)
	{
		if (i->second != "leave")
			cout << i->first << '\n';
	}
}