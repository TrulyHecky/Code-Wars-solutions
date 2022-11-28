#include <vector>
#include <algorithm>

std::vector<int> invert (std::vector<int> values)
{
    transform(values.begin(), values.end(), values.begin(), std::negate<int>());
    return values;
}
