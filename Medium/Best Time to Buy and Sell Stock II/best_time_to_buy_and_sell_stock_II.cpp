#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int> &prices) {
    int lowestVal = prices[0];
    int profitTot = 0;
    int size = prices.size();

    for (int i = 1; i < size; i++) {
      if (prices[i] < prices[i - 1]) {
        profitTot += prices[i - 1] - lowestVal;
        lowestVal = prices[i];
      } else if (i == size - 1) {
        profitTot += prices[i] - lowestVal;
      }
    }

    return profitTot;
  }
};
