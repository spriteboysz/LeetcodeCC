/**
 * Author: Deean
 * Date: 2022-09-06 23:43
 * FileName: algorithm/P0389.cpp
 * Description: 389. 找不同
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = {0};
        for (auto &c: t) count[c - 'a']++;
        for (auto &c: s) count[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (count[i] == 1) return (char) (i + 'a');
        }
        return -1;
    }
};

int main() {
    auto ans = Solution().findTheDifference("abcd", "abcde");
    cout << toString(ans) << endl;
    return 0;
}