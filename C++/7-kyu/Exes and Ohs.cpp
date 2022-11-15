#include <algorithm>

bool XO(const std::string& str)
{
  int xCount = std::count(str.begin(), str.end(), 'x') + std::count(str.begin(), str.end(), 'X');
  int oCount = std::count(str.begin(), str.end(), 'o') + std::count(str.begin(), str.end(), 'O');
  return xCount ==  oCount;
}
