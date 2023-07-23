/**
 * Author: Deean
 * Date: 2023-07-23 14:53
 * FileName: algorithm
 * Description:371. 两整数之和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned int carry = (unsigned int) (a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
    }
};

int main() {
    auto ans = Solution().getSum(1, 2);
    cout << toString(ans) << endl;
    return 0;
}
