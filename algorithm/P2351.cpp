/**
 * Author: Deean
 * Date: 2022-09-01 22:58
 * FileName: algorithm/P2351.cpp
 * Description: 2351. 第一个出现两次的字母
 */

#include <iostream>

using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        char count[26] = {0};
        for (char c : s) {
            if (++count[c - 'a'] > 1) return c;
        }
        return ' ';
    }
};

int main() {
    auto ans = Solution().repeatedCharacter("abcdd");
    cout << ans << endl;
    return 0;
}