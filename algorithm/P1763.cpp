/**
 * Author: Deean
 * Date: 2023-04-16 21:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string longestNiceSubstring(string s) {
        int maxPos = 0, maxLen = 0;
        for (int i = 0, n = s.size(); i < n; ++i) {
            int lower = 0, upper = 0;
            for (int j = i; j < n; ++j) {
                if (islower(s[j])) {
                    lower |= 1 << (s[j] - 'a');
                } else {
                    upper |= 1 << (s[j] - 'A');
                }
                if (lower == upper && j - i + 1 > maxLen) {
                    maxPos = i;
                    maxLen = j - i + 1;
                }
            }
        }
        return s.substr(maxPos, maxLen);
    }
};

int main() {
    auto ans = Solution().longestNiceSubstring("YazaAay");
    cout << toString(ans) << endl;
    return 0;
}
