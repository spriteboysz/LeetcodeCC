/**
 * Author: Deean
 * Date: 2023-06-23 15:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for (int i = 0, n = s.size(); i < n / 2; ++i) {
            auto c = min(s[i], s[n - 1 - i]);
            s[i] = c;
            s[n - 1 - i] = c;
        }
        return s;
    }
};

int main() {
    auto ans = Solution().makeSmallestPalindrome("egcfe");
    cout << toString(ans) << endl;
    return 0;
}
