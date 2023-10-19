/**
 * Author: Deean
 * Date: 2022-09-04 15:22
 * FileName: algorithm/P2108.cpp
 * Description: 2108. 找出数组中的第一个回文字符串
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string> &words) {
        string ss = "";
        for (auto &word: words) {
            ss = word;
            reverse(ss.begin(), ss.end());
            if (ss == word) return ss;
        }
        return "";
    }
};

int main() {
    vector<string> words = {"def", "ghi"};
    auto ans = Solution().firstPalindrome(words);
    cout << ans << endl;
    return 0;
}