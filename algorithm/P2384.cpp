/**
 * Author: Deean
 * Date: 2023-05-07 17:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> digits(10, 0);
        for (auto c: num) {
            digits[c - '0']++;
        }
        string ss = "";
        int single = -1;
        for (int i = 9; i >= 0; --i) {
            if (single == -1 && digits[i] % 2 == 1) {
                single = i;
            }
            for (int j = 0; j < digits[i] / 2; ++j) {
                ss += to_string(i);
            }
        }
        if (ss[0] == '0') {
            return single <= 0 ? "0" : to_string(single);
        }
        string ret = ss;
        reverse(ss.begin(), ss.end());
        return ret + (single == -1 ? "" : to_string(single)) + ss;
    }
};

int main() {
    auto ans = Solution().largestPalindromic("6006");
    cout << toString(ans) << endl;
    return 0;
}
