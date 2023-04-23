/**
 * Author: Deean
 * Date: 2023-04-22 19:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector <string> &banned) {
        unordered_set <string> set(banned.begin(), banned.end());
        unordered_map<string, int> hash;
        string word = "";
        for (auto c: paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else {
                if (word != "" && !set.count(word)) {
                    hash[word]++;
                }
                word = "";
            }
        }
        int maximum = 0;
        for (auto [k, v]: hash) {
            if (v > maximum) {
                maximum = v;
                word = k;
            }
        }
        return word;
    }
};

int main() {
    vector <string> banned = {"hit"};
    auto ans = Solution().mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", banned);
    cout << toString(ans) << endl;
    return 0;
}
