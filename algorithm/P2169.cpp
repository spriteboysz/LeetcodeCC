/**
 * Author: Deean
 * Date: 2022-09-04 21:24
 * FileName: algorithm/P2169.cpp
 * Description: 2169. 得到 0 的操作数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt = 0;
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) {
                num1 -= num2;
            } else {
                num2 -= num1;
            }
            cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countOperations(2, 3);
    cout << ans << endl;
    return 0;
}