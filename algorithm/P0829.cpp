/**
 * Author: Deean
 * Date: 2023-05-12 21:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(int n, int k) {
        if (k % 2 == 1) {
            return n % k == 0;
        }
        return n % k != 0 && 2 * n % k == 0;
    }

    int consecutiveNumbersSum(int n) {
        int cnt = 0;
        for (int i = 1; i * (i + 1) <= 2 * n; ++i) {
            if (check(n, i)) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().consecutiveNumbersSum(15);
    cout << toString(ans) << endl;
    return 0;
}
