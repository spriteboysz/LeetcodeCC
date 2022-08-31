/**
 * Author: Deean
 * Date: 2022-08-31 23:39
 * FileName: offer/O0064.cpp
 * Description: 剑指 Offer 64. 求1+2+…+n
 */

# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int sumNums(int n) {
        if (n == 1) return 1;
        return n + sumNums(n - 1);
    }
};

int main() {
    auto ans = Solution().sumNums(9);
    cout << ans << endl;
    return 0;
}