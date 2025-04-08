#include <vector>

class Solution {
public:
  bool canJump(std::vector<int> &nums) {
    int size = nums.size();
    int actualPos = size - 1;

    for (int i = size - 1; i >= 0; i--) {
      if (nums[i] >= actualPos - i)
        actualPos = i;
    }

    return actualPos == 0 ? true : false;
  }
};
