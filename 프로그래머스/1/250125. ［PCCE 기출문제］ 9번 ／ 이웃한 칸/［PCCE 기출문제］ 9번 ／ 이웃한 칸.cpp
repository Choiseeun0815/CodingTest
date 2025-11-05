#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) 
{
	int answer = 0;
	int rows = board.size();
	int cols = board[0].size();
	string color = board[h][w];

	//인접한 칸들을 탐색
	if (w - 1 >= 0)
		if (color == board[h][w - 1])
			answer++;
	if (w + 1 < cols)
		if (color == board[h][w + 1])
			answer++;
	
	if (h - 1 >= 0)
		if (color == board[h-1][w])
			answer++;
	
	if (h + 1 < rows)
		if (color == board[h + 1][w])
			answer++;

	return answer;
}