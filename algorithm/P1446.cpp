/**
 * Author: Deean
 * Date: 2023-04-18 22:50
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int maximum = 1, cnt = 1;
        for (int i = 1, n = s.size(); i < n; ++i) {
            if (s[i - 1] == s[i]) {
                cnt++;
                maximum = max(maximum, cnt);
            } else {
                cnt = 1;
            }
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxPower("abbcccddddeeeeedcba");
    cout << toString(ans) << endl;
    return 0;
}
