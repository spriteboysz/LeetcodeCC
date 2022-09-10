/**
 * Author: Deean
 * Date: 2022-09-10 14:15
 * FileName: algorithm/P2085.cpp
 * Description: 2085. 统计出现过一次的公共字符串
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int countWords(vector<string> &words1, vector<string> &words2) {
        unordered_map<string, int> map1, map2;
        for (string word: words1) map1[word]++;
        for (string word: words2) map2[word]++;
        int cnt = 0;
        for (auto pair: map1) {
            if (pair.second == 1 && map2[pair.first] == 1) cnt++;
        }
        for (auto pair: map2) {
            if (pair.second == 1 && map1[pair.first] == 1) cnt++;
        }
        return cnt / 2;
    }
};

int main() {
    vector<string> words1 = stringToVector<string>("[a,ab]");
    vector<string> words2 = stringToVector<string>("[a,a,a,ab]");
    auto ans = Solution().countWords(words1, words2);
    cout << toString(ans) << endl;
    return 0;
}