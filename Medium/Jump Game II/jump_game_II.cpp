#include <vector>

class Solution {
public:
  int jump(std::vector<int> &nums) {
    int size = nums.size();
    int pos = 0;
    int jump = 0;

    while (pos < size - 1) {
      if (pos + nums[pos] >= size - 1) {
        pos = size;
      } else {
        int highestJumpValuePos = pos + 1;
        int highestJumpValue = nums[highestJumpValuePos];
        for (int i = pos + 2; i <= pos + nums[pos]; i++) {
          int add = i - (pos + 1);
          if (nums[i] + add > highestJumpValue) {
            highestJumpValuePos = i;
            highestJumpValue = nums[i] + add;
          }
        }
        pos = highestJumpValuePos;
      }
      jump++;
    }

    return jump;
  }
};
