/**
 * Author: Deean
 * Date: 2022-09-04 20:24
 * FileName: algorithm/P1374.cpp
 * Description: 1374. 生成每种字符都是奇数个的字符串
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        if (n % 2 == 1) {
            return string(n, 'a');
        } else {
            return string(n - 1, 'a') + 'b';
        }
    }
};

int main() {
    auto ans = Solution().generateTheString(4);
    cout << ans << endl;
    return 0;
}