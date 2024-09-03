#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int idx = 0, min = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(min >= arr[i]){
            idx = i;
            min = arr[i];
        }
    }
    arr.erase(arr.begin()+idx);
    if(arr.empty()) arr.push_back(-1);    
    return arr;
}