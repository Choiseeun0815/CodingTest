#include <iostream> 
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int n; cin >> n;

    vector<int> v;
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        int input; cin >> input;
        v.push_back(input);
        maxVal = max(maxVal, input);
    }

    vector<int> zero = { 1, 0 };
    vector<int> one = { 0, 1 };

    for (int i = 2; i <= maxVal; i++) {
        zero.push_back(zero[i - 1] + zero[i - 2]);
        one.push_back(one[i - 1] + one[i - 2]);
    }

    for (int i : v) {
        cout << zero[i] << ' ' << one[i] << '\n';
    }

}