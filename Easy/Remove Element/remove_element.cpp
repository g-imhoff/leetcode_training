#include <vector>

class Solution {
public:
  int removeElement(std::vector<int> &nums, int val) {
    int k = 0;
    int size = nums.size();
    int index_to_place = 0;

    for (int i = 0; i < size; i++) {
      if (nums[i] == val)
        index_to_place--;
      else {
        if (index_to_place < i)
          nums[index_to_place] = nums[i];

        k++;
      }

      index_to_place++;
    }

    return k;
  }
};
