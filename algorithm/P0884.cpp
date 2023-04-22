/**
 * Author: Deean
 * Date: 2023-04-22 16:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> words1, words2;
        for (int i = 0, j = 0, n = s1.size(); j <= n; ++j) {
            if (s1[j] == ' ' || j == n) {
                string word = s1.substr(i, j - i);
                words1[word]++;
                i = j + 1;
            }
        }
        for (int i = 0, j = 0, n = s2.size(); j <= n; ++j) {
            if (s2[j] == ' ' || j == n) {
                string word = s2.substr(i, j - i);
                words2[word]++;
                i = j + 1;
            }
        }
        vector <string> uncommon;
        for (auto [k, v]: words1) {
            if (v == 1 && words2[k] == 0) {
                uncommon.push_back(k);
            }
        }
        for (auto [k, v]: words2) {
            if (v == 1 && words1[k] == 0) {
                uncommon.push_back(k);
            }
        }
        return uncommon;
    }
};

int main() {
    auto ans = Solution().uncommonFromSentences("this apple is sweet", "this apple is sour");
    cout << toString(ans) << endl;
    return 0;
}
