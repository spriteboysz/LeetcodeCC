/**
 * Author: Deean
 * Date: 2022-09-04 14:34
 * FileName: algorithm/P1837.cpp
 * Description: 1837. K 进制表示下的各位数字总和
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        while (n) {
            sum += n % k;
            n /= k;
        }
        return sum;
    }
};

int main() {
    auto ans = Solution().sumBase(34, 6);
    cout << ans << endl;
    return 0;
}