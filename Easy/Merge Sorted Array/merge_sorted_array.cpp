#include <vector>

class Solution {
public:
  void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int limit = m + n;
    int index = m + n - 1;
    m--;
    n--;

    for (int i = 0; i < limit && n >= 0; i++) {
      if (m >= 0 && nums1[m] >= nums2[n]) {
        nums1[index] = nums1[m];
        m--;
        index--;
      } else {
        nums1[index] = nums2[n];
        n--;
        index--;
      }
    }
  }
};
