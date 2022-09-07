/**
 * Author: Deean
 * Date: 2022-09-07 21:41
 * FileName: offer/OII0005.cpp
 * Description: 剑指 Offer II 005. 单词长度的最大乘积
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<string> &words) {
        unordered_map<string, vector<int>> map;
        for (auto word: words) {
            vector<int> vec(26, 0);
            for (auto c: word) {
                vec[c - 'a']++;
            }
            map[word] = vec;
        }
        int maximum = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                bool flag = true;
                for (int k = 0; k < 26; ++k) {
                    if (map[words[i]][k] * map[words[j]][k] != 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    maximum = max(maximum, (int) (words[i].size() * words[j].size()));
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