#include <iostream>
#include <vector>
#include <list>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	list<int> myList; //뽑은 인형을 담을 리스트
	for (int i = 0; i < moves.size(); i++) //인형 뽑기 횟수
	{
		for (int j = 0; j < board.size(); j++)
		{
			if (board[j][moves[i] - 1] == 0) continue;
			else
			{
				myList.push_back(board[j][moves[i] - 1]);
				board[j][moves[i] - 1] = 0;
				break;
			}
		}
	}
	for (auto it = myList.begin(); it != myList.end();)
	{
		auto next_it = next(it);
		if (next_it != myList.end())
		{
			if (*it == *next_it) //값이 일치하면, 
			{
				answer += 2;
				myList.erase(it);
				myList.erase(next_it);
				it = myList.begin();
			}
			else
				it++;
		}
		else break;
	}
	return answer;
}