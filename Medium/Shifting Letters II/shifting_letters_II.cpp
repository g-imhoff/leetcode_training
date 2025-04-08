#include <string>
#include <vector>

class Solution {
public:
  std::string shiftingLetters(std::string s,
                              std::vector<std::vector<int>> &shifts) {
    int size = s.size();
    std::vector<int> diffArray(size, 0);

    for (const std::vector<int> &shift : shifts) {
      int value = shift[2] == 0 ? -1 : 1;

      diffArray[shift[0]] += value;

      if (shift[1] + 1 < size)
        diffArray[shift[1] + 1] += -value;
    }

    int numberOfShifts = 0;
    for (int i = 0; i < size; i++) {
      numberOfShifts = (numberOfShifts + diffArray[i]) % 26;

      if (numberOfShifts < 0) {
        numberOfShifts += 26;
      }

      s[i] = 'a' + (s[i] - 'a' + numberOfShifts) % 26;
    }

    return s;
  }
};
