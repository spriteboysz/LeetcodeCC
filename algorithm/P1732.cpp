/**
 * Author: Deean
 * Date: 2022-09-04 16:49
 * FileName: algorithm/P1732.cpp
 * Description: 1732. 找到最高海拔
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int> &gain) {
        int maximum = 0, cur = 0;
        for (auto h: gain) {
            cur += h;
            maximum = max(maximum, cur);
        }
        return maximum;
    }
};

int main() {
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    auto ans = Solution().largestAltitude(gain);
    cout << ans << endl;
    return 0;
}