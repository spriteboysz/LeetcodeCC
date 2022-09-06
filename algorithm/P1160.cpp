/**
 * Author: Deean
 * Date: 2022-09-06 23:26
 * FileName: algorithm/P1160.cpp
 * Description: 1160. 拼写单词
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string> &words, string chars) {
        int alphabet[26] = {0};
        for (auto c: chars) alphabet[c - 'a']++;
        int cnt = 0;
        for (auto word: words) {
            int count[26] = {0};
            for (int i = 0; i < 26; ++i) count[i] = alphabet[i];
            for (auto c: word) count[c - 'a']--;
            bool flag = true;
            for (int i = 0; i < 26; ++i) {
                if (count[i] < 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) cnt += word.size();
        }
        return cnt;
    }
};

int main() {
    vector<string> words = {"hello", "world", "leetcode"};
    auto ans = Solution().countCharacters(words, "welldonehoneyr");
    cout << toString(ans) << endl;
    return 0;
}