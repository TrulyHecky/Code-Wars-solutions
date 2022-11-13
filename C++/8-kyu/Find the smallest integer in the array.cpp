#include <algorithm>
#include <vector>

int findSmallest (const std::vector<int>& xs) 
{
  return *std::min_element(xs.cbegin(), xs.cend());
}
