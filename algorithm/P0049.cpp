/**
 * Author: Deean
 * Date: 2023-07-23 23:34
 * FileName: algorithm
 * Description:49. 字母异位词分组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    string process(string word) {
        vector<char> chars;
        for (auto c: word) {
            chars.push_back(c);
        }
        sort(chars.begin(), chars.end());
        string ss;
        for (int i = 0, n = chars.size(); i < n; ++i) {
            ss.push_back(chars[i]);
        }
        return ss;
    }

public:
    vector <vector<string>> groupAnagrams(vector <string> &strs) {
        unordered_map <string, vector<string>> map;
        for (auto str: strs) {
            map[process(str)].push_back(str);
        }
        vector <vector<string>> group;
        for (auto [k, v]: map) {
            group.push_back(v);
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
