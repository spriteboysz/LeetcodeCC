/**
 * Author: Deean
 * Date: 2022-09-08 23:20
 * FileName: algorithm/P1967.cpp
 * Description: 1967. 作为子字符串出现在单词中的字符串数目
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int numOfStrings(vector<string> &patterns, string word) {
        int cnt = 0;
        for (auto &pattern: patterns) {
            if (word.find(pattern) != -1) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<string> patterns = {"a", "b", "c"};
    auto ans = Solution().numOfStrings(patterns, "aaaaabbbbb");
    cout << toString(ans) << endl;
    return 0;
}