#include <iostream> 
#include <cstring>

using namespace std;
int cnt = 0;
int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        cin >> s;
        const char* newS = s.c_str();
        cout << isPalindrome(newS) << " " << cnt << endl;
    }
}