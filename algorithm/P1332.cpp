/**
 * Author: Deean
 * Date: 2022-09-08 23:36
 * FileName: algorithm/P1332.cpp
 * Description: 1332. 删除回文子序列
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - 1 - i]) {
                return 2;
            }
        }
        return 1;
    }
};

int main() {
    auto ans = Solution().removePalindromeSub("ababa");
    cout << toString(ans) << endl;
    ans = Solution().removePalindromeSub("baabb");
    cout << toString(ans) << endl;
    return 0;
}