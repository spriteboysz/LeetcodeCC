/**
 * Author: Deean
 * Date: 2023-04-27 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        while (n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};

int main() {
    auto ans = Solution().isPowerOfFour(16);
    cout << toString(ans) << endl;
    return 0;
}
