#include <string>
#include <vector>

using namespace std;


vector<int> solution(string s) {
	vector<int> answer, v;
	//	제거된 0의 수를 담을 변수, 이진 변환의 횟수를 담을 변수
	int cnt_0 = 0, cnt = 0;

	while (true)
	{
		if (!s.compare("1")) break;

		cnt++;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0')
			{
				cnt_0++;
			}
			else
			{
				v.push_back(1);
			}
		}

		int n = v.size();
		s = "";
		
		while (n > 0) {
			s = char((n % 2) + '0') + s;
			n /= 2;
		}

		v.clear();
	}
	answer.push_back(cnt); answer.push_back(cnt_0);
	return answer;
}