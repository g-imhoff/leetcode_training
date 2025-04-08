#include <vector>

class Solution {
public:
  void reverse(std::vector<int> &nums, int i, int j) {
    while (i < j) {
      int tmp = nums[i];
      nums[i] = nums[j];
      nums[j] = tmp;

      i++;
      j--;
    }
  }

  void rotate(std::vector<int> &nums, int k) {
    int size = nums.size();

    k = k % size;

    reverse(nums, 0, size - k - 1);
    reverse(nums, size - k, size - 1);
    reverse(nums, 0, size - 1);
  }
};
