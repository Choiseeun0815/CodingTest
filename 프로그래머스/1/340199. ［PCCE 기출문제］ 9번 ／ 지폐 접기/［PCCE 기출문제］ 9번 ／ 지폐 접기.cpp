#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> wallet, vector<int> bill)
{
	int answer = 0;
	sort(wallet.begin(), wallet.end());

	while(true)
	{
		//오름차 정렬
		sort(bill.begin(), bill.end());

		if ((wallet[0] < bill[0]) || (wallet[1] < bill[1]))
		{
			bill[1] /= 2; answer++;
		}
		else break;
	}

	return answer;
}