/**
 * Author: Deean
 * Date: 2023-04-28 22:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string process(string s1, string s2) {
        for (int i = 0; i < min(s1.size(), s2.size()); ++i) {
            if (s1[i] != s2[i]) {
                return s1.substr(0, i);
            }
        }
        return s1.size() < s2.size() ? s1 : s2;
    }

    string longestCommonPrefix(vector <string> &strs) {
        string common = strs[0];
        for (int i = 1, n = strs.size(); i < n; ++i) {
            common = process(common, strs[i]);
        }
        return common;
    }
};

int main() {
    vector <string> strs = {"flower", "flow", "flight"};
    auto ans = Solution().longestCommonPrefix(strs);
    cout << toString(ans) << endl;
    return 0;
}
