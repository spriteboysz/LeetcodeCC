/**
 * Author: Deean
 * Date: 2023-05-07 17:21
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maximum = 1, cur = 1;
        for (int i = 1, n = s.size(); i < n; ++i) {
            if (s[i] - s[i - 1] == 1) {
                cur++;
                maximum = max(maximum, cur);
            } else {
                cur = 1;
            }
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().longestContinuousSubstring("abacaba");
    cout << toString(ans) << endl;
    return 0;
}
