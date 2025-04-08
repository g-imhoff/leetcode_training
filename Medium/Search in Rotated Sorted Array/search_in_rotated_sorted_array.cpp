#include <limits.h>
#include <vector>

class Solution {
public:
  int search(std::vector<int> &nums, int target) {
    return find_target_pos(nums, target);
  }

  int find_lowest_pos(std::vector<int> &nums) {
    int lowest_val = INT_MAX;
    int pos = -1;
    int i = 0;

    for (int num : nums) {
      if (num < lowest_val) {
        lowest_val = num;
        pos = i;
      }

      i++;
    }

    return pos;
  }

  int find_target_pos(std::vector<int> &nums, int target) {
    int i = 0;

    for (int num : nums) {
      if (num == target)
        return i;
      i++;
    }

    return -1;
  }
};
