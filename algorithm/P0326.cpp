/**
 * Author: Deean
 * Date: 2023-04-27 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    auto ans = Solution().isPowerOfThree(27);
    cout << toString(ans) << endl;
    return 0;
}
