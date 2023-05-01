/**
 * Author: Deean
 * Date: 2023-04-30 22:13
 * FileName: offer
 * Description: 
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
    auto ans = Solution().isPalindrome("1A man, a plan, a canal: Panama1");
    cout << toString(ans) << endl;
    return 0;
}
