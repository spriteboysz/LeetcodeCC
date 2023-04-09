/**
 * Author: Deean
 * Date: 2023-04-09 19:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maximum = 0;
        for (int i = 0, n = s.size(), cur = 0; i < n; ++i) {
            if (s[i] == '1' && i - cur - 1 >= 0 && s[i - cur - 1] == '0') {
                cur += 2;
            } else {
                cur = 0;
            }
            maximum = max(maximum, cur);
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().findTheLongestBalancedSubstring("01000111");
    cout << toString(ans) << endl;
    return 0;
}
