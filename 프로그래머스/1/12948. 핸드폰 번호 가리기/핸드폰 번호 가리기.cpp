#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    for(int i=0;i<phone_number.length();i++)
    {
         if(phone_number.length() - i > 4)
             phone_number[i] = '*';
    }
    return phone_number;
}