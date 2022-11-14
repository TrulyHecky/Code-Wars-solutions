#include <string>
using namespace std; 

string strong_num (int number)
{
    int fac[10] = {1,1,2,6,24,120,720,5040,40320,362880};
    int sum = 0;
    int temp = number;
    while (temp > 0) {
      sum += fac[temp%10];
      temp /= 10;
    }
    if (sum == number) return "STRONG!!!!";
    return "Not Strong !!"; 
}
