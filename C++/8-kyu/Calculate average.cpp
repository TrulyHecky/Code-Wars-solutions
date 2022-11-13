#include <vector>
#include <numeric>

double calcAverage (const vector<int>& values)
{
  return accumulate(values.begin(), values.end(), 0.0) / values.size();
}
