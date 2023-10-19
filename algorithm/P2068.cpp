/**
 * Author: Deean
 * Date: 2022-09-04 23:28
 * FileName: algorithm/P2068.cpp
 * Description: 2068. 检查两个字符串是否几乎相等
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int count[26] = {0};
        for (auto &c: word1) count[c - 'a']++;
        for (auto &c: word2) count[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (abs(count[i]) > 3) return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().checkAlmostEquivalent("cccddabba", "babababab");
    cout << ans << endl;
    return 0;
}