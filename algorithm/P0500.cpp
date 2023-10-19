/**
 * Author: Deean
 * Date: 2022-09-09 23:41
 * FileName: algorithm/P0500.cpp
 * Description: 500. 键盘行
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string> &words) {
        char w[26] = {2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
        vector<string> vec;
        for (auto &word: words) {
            int index = w[tolower(word[0]) - 'a'];
            for (auto c: word)
                if (index != w[tolower(c) - 'a']) {
                    index = 0;
                    break;
                };
            if (index) vec.push_back(word);
        }
        return vec;
    }
};

int main() {
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    auto ans = Solution().findWords(words);
    cout << toString(ans) << endl;
    return 0;
}