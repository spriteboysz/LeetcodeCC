/**
 * Author: Deean
 * Date: 2022-09-07 21:58
 * FileName: algorithm/P0318.cpp
 * Description: 318. 最大单词长度乘积
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int maxProduct(vector<string> &words) {
        vector<int> mask;
        for (auto word: words) {
            int cur = 0;
            for (auto c: word) {
                cur |= 1 << (c - 'a');
            }
            mask.push_back(cur);
        }
        int maximum = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if ((mask[i] & mask[j]) == 0) {
                    maximum = max(maximum, int(words[i].size() * words[j].size()));
                }
            }
        }
        return maximum;
    }
};

int main() {
    vector<string> words = {"a", "ab", "abc", "d", "cd", "bcd", "abcd"};
    auto ans = Solution().maxProduct(words);
    cout << toString(ans) << endl;
    return 0;
}