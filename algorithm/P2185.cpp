/**
 * Author: Deean
 * Date: 2022-09-08 23:09
 * FileName: algorithm/P2185.cpp
 * Description: 2185. 统计包含给定前缀的字符串
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string> &words, string pref) {
        int cnt = 0;
        for (auto &word: words) {
            if (word.find(pref) == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<string> words = {"leetcode", "win", "loops", "success"};
    auto ans = Solution().prefixCount(words, "code");
    cout << toString(ans) << endl;
    return 0;
}