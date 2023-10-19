/**
 * Author: Deean
 * Date: 2022-09-04 16:44
 * FileName: algorithm/P1844.cpp
 * Description: 1844. 将所有数字用字符替换
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.size(); i += 2) {
            s[i + 1] = (char) (s[i] + s[i + 1] - '0');
        }
        return s;
    }
};

int main() {
    auto ans = Solution().replaceDigits("a1b2c3d4e");
    cout << ans << endl;
    return 0;
}