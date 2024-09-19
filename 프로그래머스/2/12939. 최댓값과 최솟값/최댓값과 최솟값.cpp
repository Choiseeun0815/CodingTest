#include <string>
#include <sstream>
#include <limits.h>
using namespace std;

string solution(string s) {
    string answer = "";
    int max = INT_MIN, min = INT_MAX;
    stringstream ss(s); 
    int num;
    
    while (ss >> num) { 
        if (num > max) max = num;
        if (num < min) min = num;
    }
    
    answer = to_string(min) + " " + to_string(max);
    return answer;
}
