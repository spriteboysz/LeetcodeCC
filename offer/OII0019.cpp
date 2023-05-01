/**
 * Author: Deean
 * Date: 2023-04-30 22:08
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(string s) {
        for (int i = 0, n = s.size(); i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        for (int i = 0, n = s.size(); i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) {
                return check(s.substr(0, i) + s.substr(i + 1)) ||
                       check(s.substr(0, n - 1 - i) + s.substr(n - i));
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().validPalindrome("abca");
    cout << toString(ans) << endl;
    return 0;
}
