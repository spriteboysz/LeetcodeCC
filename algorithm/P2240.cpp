/**
 * Author: Deean
 * Date: 2023-07-17 23:48
 * FileName: algorithm
 * Description:2240. 买钢笔和铅笔的方案数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long cnt = 0;
        int maximum = max(cost1, cost2), minimum = min(cost1, cost2);
        for (int i = 0; 1LL * i * maximum <= total; ++i) {
            cnt += (total - i * maximum) / minimum + 1;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().waysToBuyPensPencils(20, 10, 5);
    cout << toString(ans) << endl;
    return 0;
}
