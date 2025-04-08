#include <map>
#include <vector>

class Solution {
public:
  int hIndex(std::vector<int> &citations) {
    std::map<int, int> hashMap;

    for (int citation : citations) {
      hashMap[citation]++;
    }

    int count = 0;
    int value = 0;
    for (auto iter = hashMap.rbegin();
         iter->first > count && iter != hashMap.rend(); ++iter) {
      count += iter->second;
      value = iter->first;
    }

    return count < value ? count : value;
  }
};
