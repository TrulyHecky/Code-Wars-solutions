#include <string>

using namespace std; 

bool tidyNumber (int num)
{
  while (num >= 10) {
    int last = num % 10;
    num /= 10;
    if (last < num % 10) return false;
  }
  return true;
}
