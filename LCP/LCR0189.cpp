/**
 * Author: Deean
 * Date: 2023-10-14 19:39
 * FileName: LCP
 * Description: LCR 189. 设计机械累加器
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int mechanicalAccumulator(int target) {
        return target == 0 ? 0 : mechanicalAccumulator(target - 1) + target;
    }
};

int main() {
    auto ans = Solution().mechanicalAccumulator(5);
    cout << toString(ans) << endl;
    return 0;
}