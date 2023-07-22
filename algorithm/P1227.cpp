/**
 * Author: Deean
 * Date: 2023-07-22 22:04
 * FileName: algorithm
 * Description:1227. 飞机座位分配概率
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        return n == 1 ? 1.0 : 0.5;
    }
};

int main() {
    auto ans = Solution().nthPersonGetsNthSeat(2);
    cout << toString(ans) << endl;
    return 0;
}
