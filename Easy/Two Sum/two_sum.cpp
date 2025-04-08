#include <vector>

class Solution {
public:
  unordered_map<int, int> hashmap;
  vector<int> twoSum(vector<int> &nums, int target) {
    std::vector<int> result;
    int length = nums.size();
    int comp;

    for (int i = 0; i < length; i++) {
      hashmap[nums[i]] = i;
    }

    for (int i = 0; i < length; i++) {
      comp = target - nums[i];
      if (hashmap.count(comp) && hashmap[comp] != i) {
        return {i, hashmap[comp]};
      }
    }

    return {};
  }
};
