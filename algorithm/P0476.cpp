/**
 * Author: Deean
 * Date: 2022-09-07 22:47
 * FileName: algorithm/P0476.cpp
 * Description: 476. 数字的补数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int ret = 0, h = 0;  // 记录几次方
        while (num > 0) {
            if (num % 2 == 0) ret += pow(2, h);  /* 该位为0, 就取反当1来算 */
            h++;
            num /= 2;
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().findComplement(5);
    cout << toString(ans) << endl;
    return 0;
}