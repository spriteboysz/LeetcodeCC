/**
 * Author: Deean
 * Date: 2023-04-29 22:28
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int add(int a, int b) {
        while (b != 0) {
            unsigned int carry = (unsigned int) (a & b) << 1;
            a = a ^ b;
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
