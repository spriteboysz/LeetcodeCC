/**
 * Author: Deean
 * Date: 2023-10-14 19:41
 * FileName: LCP
 * Description: LCR 190. 加密运算
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int encryptionCalculate(int a, int b) {
        while (b != 0) {
            unsigned int carry = (unsigned int) (a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
    }
};

int main() {
    auto ans = Solution().encryptionCalculate(5, -1);
    cout << toString(ans) << endl;
    return 0;
}