#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	char res;
	string str;
	cin >> str;

	//알파벳의 수만큼 배열을 선언
	int alphabet[26] = { 0, };
	int max = alphabet[0], maxIdx;

	//문자열을 모두 대문자로 변환
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}

	for (int j = 0; j < str.size(); j++)
	{
		for (int i = 'A'; i <= 'Z'; i++)
		{
			if (str[j] == i)
				alphabet[int(i) - (int)'A']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i]) {
			max = alphabet[i];
			maxIdx = i;
		}
	}
	
	res = (char)(maxIdx + (int)'A');

	for (int i = 0; i < 26; i++)
	{
		if (i != maxIdx && max == alphabet[i])
		{
			res = '?';
		}
	}
	
	cout << res;
}
