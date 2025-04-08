#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    int size = nums.size();
    int j = 0;

    for (int i = 0; i < size; i++) {
      if (i == 0 || i == 1 || nums[i] != nums[j - 2])
        nums[j++] = nums[i];
    }

    return j;
  }
};
