/**
 * Author: Deean
 * Date: 2022-09-04 15:50
 * FileName: algorithm/P1528.cpp
 * Description: 1528. 重新排列字符串
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int> &indices) {
        string ss = s;
        for (int i = 0; i < s.size(); ++i) {
            ss[indices[i]] = s[i];
        }
        return ss;
    }
};

int main() {
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    auto ans = Solution().restoreString("codeleet", indices);
    cout << ans << endl;
    return 0;
}