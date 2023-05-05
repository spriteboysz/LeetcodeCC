/**
 * Author: Deean
 * Date: 2023-05-05 21:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x) {
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
                return 0;
            }
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
};

int main() {
    auto ans = Solution().reverse(123);
    cout << toString(ans) << endl;
    return 0;
}
