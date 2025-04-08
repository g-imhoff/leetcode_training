#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int> &prices) {
    int size = prices.size();
    int highestProfit = 0;
    int lowestVal = prices[0];

    for (int i = 1; i < size; i++) {
      if (prices[i] < lowestVal) {
        lowestVal = prices[i];
      } else if (prices[i] - lowestVal > highestProfit) {
        highestProfit = prices[i] - lowestVal;
      }
    }

    return highestProfit;
  }
};
