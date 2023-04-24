/**
 * Author: Deean
 * Date: 2023-04-23 21:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(string s) {
        for (int left = 0, right = s.size() - 1; left < right; ++left, --right) {
            if (s[left] != s[right]) {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        for (int left = 0, right = s.size() - 1; left < right; ++left, --right) {
            if (s[left] != s[right]) {
                return check(s.substr(0, left) + s.substr(left + 1)) ||
                       check(s.substr(0, right) + s.substr(right + 1));
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().validPalindrome("aba");
    cout << toString(ans) << endl;
    return 0;
}
