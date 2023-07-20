/**
 * Author: Deean
 * Date: 2023-07-20 23:24
 * FileName: algorithm
 * Description:1433. 检查一个字符串是否可以打破另一个字符串
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        vector<char> ss1, ss2;
        for (int i = 0, n = s1.size(); i < n; ++i) {
            ss1.push_back(s1[i]);
            ss2.push_back(s2[i]);
        }
        sort(ss1.begin(), ss1.end());
        sort(ss2.begin(), ss2.end());
        bool flag1 = false, flag2 = false;
        for (int i = 0, n = ss1.size(); i < n; ++i) {
            if (ss1[i] < ss2[i]) flag1 = true;
            if (ss1[i] > ss2[i]) flag2 = true;
        }
        return !(flag1 && flag2);
    }
};

int main() {
    auto ans = Solution().checkIfCanBreak("leetcodee", "interview");
    cout << toString(ans) << endl;
    return 0;
}
