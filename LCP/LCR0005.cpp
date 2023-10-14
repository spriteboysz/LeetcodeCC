/**
 * Author: Deean
 * Date: 2023-10-10 23:44
 * FileName: LCP
 * Description: LCR 005. 最大单词长度乘积
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxProduct(vector <string> &words) {
        unordered_map<string, int> map;
        for (const auto &word: words) {
            int value = 0;
            for (const auto &c: word) {
                value |= 1 << (c - 'a');
            }
            map[word] = value;
        }
        int maximum = 0;
        for (int i = 0, n = words.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((map[words[i]] & map[words[j]]) == 0) {
                    maximum = max(maximum, (int) (words[i].size() * words[j].size()));
                }
            }
        }
        return maximum;
    }
};

int main() {
    vector <string> words = {"a", "ab", "abc", "d", "cd", "bcd", "abcd"};
    auto ans = Solution().maxProduct(words);
    cout << toString(ans) << endl;
    return 0;
}