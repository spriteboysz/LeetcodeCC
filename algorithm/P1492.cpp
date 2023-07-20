/**
 * Author: Deean
 * Date: 2023-07-19 23:14
 * FileName: algorithm
 * Description:1492. n 的第 k 个因子
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor1, factor2;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                factor1.push_back(i);
                if (i * i != n) factor2.push_back(n / i);
            }
            if (factor1.size() == k) {
                return i;
            }
        }
        for (int i = factor2.size() - 1; i >= 0; --i) {
            factor1.push_back(factor2[i]);
        }
        return factor1.size() < k ? -1 : factor1[k - 1];
    }
};

int main() {
    auto ans = Solution().kthFactor(12, 6);
    cout << toString(ans) << endl;
    return 0;
}
