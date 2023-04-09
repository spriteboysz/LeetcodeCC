/**
 * Author: Deean
 * Date: 2023-04-09 12:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0, pos = 0;
        while (n > 0) {
            int digit = n & 1;
            if (pos % 2 == 0) {
                even += digit;
            } else {
                odd += digit;
            }
            n >>= 1;
            pos++;
        }
        return vector < int > {even, odd};
    }
};

int main() {
    auto ans = Solution().evenOddBit(17);
    cout << toString(ans) << endl;
    return 0;
}
