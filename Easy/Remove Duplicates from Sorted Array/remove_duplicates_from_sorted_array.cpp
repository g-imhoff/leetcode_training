#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    int index = 1;
    int highest_value = nums[0];
    int size = nums.size();

    for (int i = 1; i < size; i++) {
      nums[index] = nums[i];

      if (nums[i] > highest_value) {
        index++;
        highest_value = nums[i];
      }
    }

    return index;
  }
};
