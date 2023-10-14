/**
 * Author: Deean
 * Date: 2023-10-11 20:56
 * FileName: LCP
 * Description: LCR 018. 验证回文串
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for (auto c: s) {
            if (isalnum(c)) {
                ss.append(1, tolower(c));
            }
        }
        for (int i = 0, n = ss.size(); i < n / 2; ++i) {
            if (ss[i] != ss[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isPalindrome("A man, a plan, a canal: Panama");
    cout << toString(ans) << endl;
    return 0;
}