
#include <vector>
using namespace std;

class Solution {

    static const int IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE = -1;

public:
    int minOperations(vector<int>& input) const {
        int countFlips = 0;

        for (size_t i = 0; i < input.size(); ++i) {
            if (input[i] == 1) {
                continue;
            }
            if (i + 2 > input.size() - 1) {
                return IMPOSSIBLE_TO_MAKE_ALL_ELEMENTS_EQUAL_TO_ONE;
            }
            input[i + 1] ^= 1;
            input[i + 2] ^= 1;
            ++countFlips;
        }

        return countFlips;
    }
};
