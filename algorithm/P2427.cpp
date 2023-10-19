/**
 * Author: Deean
 * Date: 2022-10-12 22:05
 * FileName: algorithm/P2427.cpp
 * Description: 2427. 公因子的数目
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt = 0;
        for (int i = 1; i <= min(a, b); ++i) {
            if (a % i == 0 && b % i == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().commonFactors(25, 30);
    cout << toString(ans) << endl;
    return 0;
}