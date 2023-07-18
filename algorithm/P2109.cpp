/**
 * Author: Deean
 * Date: 2023-07-18 23:24
 * FileName: algorithm
 * Description:2109. 向字符串添加空格
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int> &spaces) {
        string ss = "";
        for (int i = 0, pos = 0, m = spaces.size(), n = s.size(); i < n; ++i) {
            if (pos < m && i == spaces[pos]) {
                pos++;
                ss.push_back(' ');
            }
            ss.push_back(s[i]);
        }
        return ss;
    }
};

int main() {
    vector<int> spaces = {8, 13, 15};
    auto ans = Solution().addSpaces("LeetcodeHelpsMeLearn", spaces);
    cout << toString(ans) << endl;
    return 0;
}
