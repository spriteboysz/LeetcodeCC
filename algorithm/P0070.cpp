/**
 * Author: Deean
 * Date: 2023-04-29 12:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int p = 0, q = 0, r = 1;
        for (int i = 1; i <= n; ++i) {
            p = q;
            q = r;
            r = p + q;
        }
        return r;
    }
};

int main() {
    auto ans = Solution().climbStairs(3);
    cout << toString(ans) << endl;
    return 0;
}
