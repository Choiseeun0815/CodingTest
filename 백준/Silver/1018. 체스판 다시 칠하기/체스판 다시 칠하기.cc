#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int Func(int startY, int startX, vector<vector<char>> matrix, char C)
{
	int cnt = 0;;

	//기존 체스판 정보를 복제
	vector<vector<char>> copy = matrix;

	if (matrix[startY][startX] != C) cnt++;

	copy[startY][startX] = C; // 시작점을 강제로 설정(W or B)
	for (int i = startY; i < startY + 8; i++)
	{
		if (i > startY && copy[i][startX] == copy[i - 1][startX])
		{
			copy[i][startX] = copy[i - 1][startX] == 'B' ? 'W' : 'B'; // Y축 첫 번째 칸만 수정
			cnt++;
		}
		for (int j = startX + 1; j < startX + 8; j++)
		{
			if (copy[i][j] == copy[i][j - 1])
			{
				copy[i][j] = copy[i][j - 1] == 'B' ? 'W' : 'B'; // X축 나머지 칸 수정
				cnt++;
			}
		}
	}
	
	return cnt;
}
int main() 
{
	int N, M, cntW = INT_MAX, cntB = INT_MAX;
	cin >> N >> M;

	//N x M 크기의 2차원 char 자료형 벡터 생성
	vector<vector<char>> matrix(N, vector<char>(M, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//N x M 크기의 벡터에서 8x8 사이즈의 정사각형 영역을 탐색하기 위함
	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			if (cntW > Func(i, j, matrix, 'W'))
			{
				cntW = Func(i, j, matrix, 'W');
			}

			if (cntB > Func(i, j, matrix, 'B'))
			{
				cntB = Func(i, j, matrix, 'B');
			}
		}
	}
	cout << min(cntW, cntB);
}
