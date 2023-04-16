/**
 * Author: Deean
 * Date: 2023-04-16 14:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool makeEqual(vector <string> &words) {
        int hash[26] = {0};
        for (const auto &word: words) {
            for (char c: word) {
                hash[c - 'a']++;
            }
        }
        for (int i = 0, n = words.size(); i < 26; ++i) {
            if (hash[i] % n != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector <string> words = {"abc", "aabc", "bc"};
    auto ans = Solution().makeEqual(words);
    cout << toString(ans) << endl;
    return 0;
}
