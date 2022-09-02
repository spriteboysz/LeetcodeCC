/**
 * Author: Deean
 * Date: 2022-09-02 22:29
 * FileName: LCP/LCP0006.cpp
 * Description: LCP 06. 拿硬币
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minCount(vector<int> &coins) {
        int count = 0;
        for (int coin : coins) count += (coin + 1) / 2;
        return count;
    }
};

int main() {
    vector<int> coins = {2, 3, 10};
    auto ans = Solution().minCount(coins);
    cout << ans << endl;
    return 0;
}