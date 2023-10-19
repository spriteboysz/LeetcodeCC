/**
 * Author: Deean
 * Date: 2022-10-09 23:42
 * FileName: algorithm/P0066.cpp
 * Description: 66. 加一
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; --i) {
            carry += digits[i];
            digits[i] = carry % 10;
            carry /= 10;
        }
        if (carry != 0) {
            digits.emplace(digits.begin(), carry);
        }
        return digits;
    }
};

int main() {
    vector<int> digits = stringToVector("[1,2,3]");
    auto ans = Solution().plusOne(digits);
    cout << toString(ans) << endl;
    digits = stringToVector("[9,9,9]");
    ans = Solution().plusOne(digits);
    cout << toString(ans) << endl;
    return 0;
}