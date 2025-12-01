#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
	vector<vector<int>> answer;
	vector<string> compare = { "code", "date", "maximum", "remain" };
	int idx = 0;
	auto ext_idx = find(compare.begin(), compare.end(), ext);
	if (ext_idx != compare.end()) //비교 기준이 되는 인덱스 정보 추출
		idx = ext_idx - compare.begin();
	cout << "ext_idx : " << idx << " : " << compare[idx] << endl;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i][idx] < val_ext)
			answer.push_back(data[i]); //ext 값이 val_ext보다 작은 데이터를 추출
	}

	auto sort_by_idx = find(compare.begin(), compare.end(), sort_by);
	if (sort_by_idx != compare.end()) //정렬 기준이 되는 인덱스 정보 추출
		idx = sort_by_idx - compare.begin();
	cout << "sort_by_idx : " << idx << " : " << compare[idx] << endl;

	sort(answer.begin(), answer.end(), [&](const vector<int>& a,const vector<int>& b)
		{
			return a[idx] < b[idx];
		});

	return answer;
}