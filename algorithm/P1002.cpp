/**
 * Author: Deean
 * Date: 2023-04-21 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> commonChars(vector <string> &words) {
        vector<int> hash(26, 0);
        for (char c: words[0]) {
            hash[c - 'a']++;
        }
        for (int i = 1, n = words.size(); i < n; ++i) {
            vector<int> hash1(26, 0);
            for (char c: words[i]) {
                hash1[c - 'a']++;
            }
            for (int j = 0; j < 26; ++j) {
                hash[j] = min(hash[j], hash1[j]);
            }
        }
        vector <string> common;
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < hash[i]; ++j) {
                common.emplace_back(1, i + 'a');
            }
        }
        return common;
    }
};

int main() {
    vector <string> words = {"bella", "label", "roller"};
    auto ans = Solution().commonChars(words);
    cout << toString(ans) << endl;
    return 0;
}
