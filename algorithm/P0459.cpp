/**
 * Author: Deean
 * Date: 2023-04-26 22:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int i = 1, n = s.size(); i * 2 <= n; ++i) {
            if (n % i != 0) continue;
            bool flag = true;
            for (int j = i; j < n; ++j) {
                if (s[j] != s[j - i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
        }
        return false;
    }
};

int main() {
    auto ans = Solution().repeatedSubstringPattern("abcabcabcabc");
    cout << toString(ans) << endl;
    return 0;
}
