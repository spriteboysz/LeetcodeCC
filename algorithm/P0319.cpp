/**
 * Author: Deean
 * Date: 2023-07-23 15:09
 * FileName: algorithm
 * Description:319. 灯泡开关
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n + 0.5);
    }
};

int main() {
    auto ans = Solution().bulbSwitch(3);
    cout << toString(ans) << endl;
    return 0;
}
