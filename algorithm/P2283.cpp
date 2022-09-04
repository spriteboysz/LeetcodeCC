/**
 * Author: Deean
 * Date: 2022-09-04 14:45
 * FileName: algorithm/P2283.cpp
 * Description: 2283. 判断一个数的数字计数是否等于数位的值
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        for (int i = 0; i < num.size(); ++i) {
            if (count(num.begin(), num.end(), (char) (i + '0')) != num[i] - '0') return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().digitCount("1210");
    cout << ans << endl;
    ans = Solution().digitCount("030");
    cout << ans << endl;
    return 0;
}