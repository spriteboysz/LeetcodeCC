/**
 * Author: Deean
 * Date: 2023-07-15 22:41
 * FileName: algorithm
 * Description:458. 可怜的小猪
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int states = minutesToTest / minutesToDie + 1;
        return ceil(log(buckets) / log(states) - 1e-5);
    }
};

int main() {
    auto ans = Solution().poorPigs(1000, 15, 60);
    cout << toString(ans) << endl;
    return 0;
}
