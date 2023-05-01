/**
 * Author: Deean
 * Date: 2023-05-01 17:08
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int add(int a, int b) {
        while (b != 0) {
            unsigned int carry = (unsigned int) (a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
    }
};

int main() {
    auto ans = Solution().add(1, 1);
    cout << toString(ans) << endl;
    return 0;
}
