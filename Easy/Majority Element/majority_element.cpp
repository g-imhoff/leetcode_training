#include <limits.h>
#include <map>
#include <vector>

class Solution {
public:
  int majorityElement(std::vector<int> &nums) {
    std::map<int, int> map;
    int result;

    for (int num : nums) {
      map[num]++;
    }

    int highest = INT_MIN;

    for (const auto &[key, value] : map) {
      if (value > highest) {
        result = key;
        highest = value;
      }
    }

    return result;
  }
};
