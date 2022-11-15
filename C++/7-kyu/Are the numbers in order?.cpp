#include <algorithm>
#include <vector>

bool isAscOrder(const std::vector<int>& v) {
  return std::is_sorted(v.begin(), v.end());
}
