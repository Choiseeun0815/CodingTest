#include <iostream>
#include <vector>
using namespace std;

void func(int C)
{
	//쿼터, 다임, 니켈, 페니
	vector<float> money = { 0.25f,0.1f, 0.05f, 0.01f };
	int res = 0;
	for (int i = 0; i < money.size(); i++)
	{
		cout << C / (int)(100 * money[i]) << " ";
		C = C % (int)(100 * money[i]);
	}
}
int main() 
{
	int T;
	vector<float> C;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int input;
		cin >> input;
		C.push_back(input); 
	}

	for (int i = 0; i < T; i++)
	{
		func(C[i]);
		cout << endl;
	}

	return 0;
}