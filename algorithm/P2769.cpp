/**
 * Author: Deean
 * Date: 2023-07-14 22:31
 * FileName: algorithm
 * Description:2769. 找出最大的可达成数字
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + t * 2;
    }
};

int main() {
    auto ans = Solution().theMaximumAchievableX(3, 2);
    cout << toString(ans) << endl;
    return 0;
}
