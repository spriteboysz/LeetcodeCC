/**
 * Author: Deean
 * Date: 2022-09-04 21:12
 * FileName: offer/O0005.cpp
 * Description: 剑指 Offer 05. 替换空格
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string ss = "";
        for (auto c: s) {
            if (c == ' ') {
                ss += "%20";
            } else {
                ss += c;
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().replaceSpace("We are happy.");
    cout << ans << endl;
    return 0;
}