/**
 * Author: Deean
 * Date: 2022-09-03 20:52
 * FileName: algorithm/P2255.cpp
 * Description: 2255. 统计是给定字符串前缀的字符串数目
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrefixes(vector<string> &words, string s) {
        int cnt = 0;
        for (string word: words) {
            if (s.find(word) == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<string> words = {"a", "b", "c", "ab", "bc", "abc"};
    auto ans = Solution().countPrefixes(words, "abc");
    cout << ans << endl;
    return 0;
}