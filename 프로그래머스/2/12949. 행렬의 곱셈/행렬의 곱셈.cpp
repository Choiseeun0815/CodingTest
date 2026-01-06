#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>>ans; // -> arr1 높이 x arr2 폭 크기의 2차원 벡터 생성

	int arr1_width = arr1[0].size(), arr1_height = arr1.size();
	int arr2_width = arr2[0].size(); 
	vector<int> vec(arr2_width); //결과 폭

	for (int i = 0; i < arr1_height; i++) //arr1 높이
	{
		for (int j = 0; j < arr1_width; j++) //arr1 폭
		{
			int A = arr1[i][j];

			for (int k = 0; k < arr2_width; k++) //arr2 폭
			{
				int B = arr2[j][k];
				vec[k] += (A * B);
			}
		}
		ans.push_back(vec);
		fill(vec.begin(), vec.end(), 0); //모든 원소를 0으로 초기화
	}
	return ans;
}