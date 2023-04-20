/**
 * Author: Deean
 * Date: 2023-04-21 00:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n <= 2) return 1;
        int p = 0, q = 0, r = 1, s = 1;
        for (int i = 3; i <= n; ++i) {
            p = q;
            q = r;
            r = s;
            s = p + q + r;
        }
        return s;
    }
};

int main() {
    auto ans = Solution().tribonacci(25);
    cout << toString(ans) << endl;
    return 0;
}
