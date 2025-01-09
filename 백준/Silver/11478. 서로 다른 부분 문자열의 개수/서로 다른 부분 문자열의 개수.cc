#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	set<string> result;

	for (int i = 0; i < input.length(); i++)
	{
		string newString = "";
		for (int j = i; j < input.length(); j++)
		{
			newString += input[j];
			result.insert(newString);
		}
	}

	cout << result.size();
}