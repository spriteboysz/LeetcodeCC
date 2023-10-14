/**
 * Author: Deean
 * Date: 2023-10-11 22:37
 * FileName: LCP
 * Description: LCR 033. 字母异位词分组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<string>> groupAnagrams(vector <string> &strs) {
        unordered_map <string, vector<string>> map;
        for (const auto &word: strs) {
            string key = word;
            std::sort(key.begin(), key.end());
            map[key].emplace_back(word);
        }
        vector <vector<string>> group;
        for (const auto &pair: map) {
            group.push_back(pair.second);
        }
        return group;
    }
};

int main() {
    vector <string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto ans = Solution().groupAnagrams(strs);
    cout << toString(ans) << endl;
    return 0;
}