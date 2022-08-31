/**
 * Author: Deean
 * Date: 2022-08-31 23:29
 * FileName: algorithm/P2114.cpp
 * Description: 2114. 句子中的最多单词数
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string> &sentences) {
        int cnt = 0;
        for (const string &sentence: sentences) {
            int cur = count(sentence.begin(), sentence.end(), ' ') + 1;
            cnt = max(cnt, cur);
        }
        return cnt;
    }
};

int main() {
    vector<string> sentences = {"please wait", "continue to fight", "continue to win"};
    auto ans = Solution().mostWordsFound(sentences);
    cout << ans << endl;
    return 0;
}