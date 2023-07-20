/**
 * Author: Deean
 * Date: 2023-07-20 23:38
 * FileName: algorithm
 * Description:1417. 重新格式化字符串
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reformat(string s) {
        string s1 = "", s2 = "";
        for (char c: s) {
            if (islower(c)) {
                s1.push_back(c);
            } else {
                s2.push_back(c);
            }
        }
        int n1 = s1.size(), n2 = s2.size();
        if (abs(n1 - n2) > 1) return "";
        string ss = "";
        for (int i = 0; i < min(n1, n2); ++i) {
            ss.push_back(s1[i]);
            ss.push_back(s2[i]);
        }
        if (n1 > n2) {
            ss.push_back(s1[n1 - 1]);
        } else if (n2 > n1) {
            ss.insert(ss.begin(), s2[n2 - 1]);
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().reformat("covid2019");
    cout << toString(ans) << endl;
    return 0;
}
