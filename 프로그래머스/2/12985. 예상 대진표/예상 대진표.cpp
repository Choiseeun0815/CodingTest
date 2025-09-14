#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
     int answer = 1; //1라운드부터 시작
 for (int i = 0; i = n / 2; i++)
 {
     bool isA_Odd = (a % 2 == 1);
     bool isB_Odd = (b % 2 == 1);

     if (isA_Odd != isB_Odd)
     {
         if (isA_Odd) //a가 홀수인 경우, 
         {
             if (b == a + 1) //b가 a에 1을 더한 결과와 같다면 대진표에서 만남
             {
                 break;
             }
         }
         else if (isB_Odd)
         {
             if (a == b + 1)
             {
                 break;
             }
         }
     }

     a = (a + 1) / 2;
     b = (b + 1) / 2;
     answer++;
 }

 return answer;
}