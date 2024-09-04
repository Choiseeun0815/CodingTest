using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long payment = 0;
    for(int i=1; i<=count; i++)
        payment += price * i;
    
    answer = money - payment;
    if(answer >= 0) return 0;
    return -answer;
}