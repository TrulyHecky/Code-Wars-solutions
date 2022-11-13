#include <string>

std::string fakeBin (std::string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    str[i] = ((str[i] - '0') > 4) ? '1' : '0';
  }
  return str;
}
