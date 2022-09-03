/**
 * Author: Deean
 * Date: 2022-09-03 22:59
 * FileName: algorithm/P1281.cpp
 * Description: 1281. 整数的各位积和之差
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while (n) {
            int cur = n % 10;
            product *= cur;
            sum += cur;
            n /= 10;
        }
        return product - sum;
    }
};

int main() {
    auto ans = Solution().subtractProductAndSum(4421);
    cout << ans << endl;
    return 0;
}