/**
 * Author: Deean
 * Date: 2023-04-22 14:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isAlienSorted(vector <string> &words, string order) {
        unordered_map<char, int> hash;
        for (int i = 0; i < order.size(); ++i) {
            hash[order[i]] = i;
        }
        for (int i = 0, n = words.size(); i < n; ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                words[i][j] = hash[words[i][j]];
            }
        }
        for (int i = 1, n = words.size(); i < n; ++i) {
            if (words[i] < words[i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector <string> words = {"hello", "leetcode"};
    auto ans = Solution().isAlienSorted(words, "hlabcdefgijkmnopqrstuvwxyz");
    cout << toString(ans) << endl;
    return 0;
}
