/**
 * Author: Deean
 * Date: 2022-09-01 00:03
 * FileName: algorithm/P0771.cpp
 * Description: 771. 宝石与石头
 */

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for (char c : jewels) {
            cnt += count(stones.begin(), stones.end(), c);
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().numJewelsInStones("aA", "aAAbbbb");
    cout << ans << endl;
    return 0;
}