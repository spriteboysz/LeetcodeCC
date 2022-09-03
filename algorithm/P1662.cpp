/**
 * Author: Deean
 * Date: 2022-09-03 20:21
 * FileName: algorithm/P1662.cpp
 * Description: 1662. 检查两个字符串数组是否相等
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2) {
        string s1 = "", s2 = "";
        for (string w: word1) s1 += w;
        for (string w: word2) s2 += w;
        return s1 == s2;
    }
};

int main() {
    vector<string> word1 = {"abc", "d", "defg"};
    vector<string> word2 = {"abcddefg"};
    auto ans = Solution().arrayStringsAreEqual(word1, word2);
    cout << ans << endl;
    return 0;
}