/**
 * Author: Deean
 * Date: 2023-10-13 21:41
 * FileName: LCP
 * Description: LCR 065. 单词的压缩编码
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumLengthEncoding(vector <string> &words) {
        unordered_set <string> visited;
        for (int i = 0; i < words.size(); i++) {
            visited.insert(words[i]);
        }
        for (int i = 0; i < words.size(); i++) {
            for (int j = 1; j < words[i].size(); j++) {
                if (visited.count(words[i].substr(j, words[i].size() - j))) {
                    visited.erase(words[i].substr(j, words[i].size() - j));
                }
            }
        }
        int length = 0;
        for (auto &word: visited)
            length += word.size() + 1;
        return length;
    }
};

int main() {
    vector <string> words = {"time", "me", "bell"};
    auto ans = Solution().minimumLengthEncoding(words);
    cout << toString(ans) << endl;
    return 0;
}