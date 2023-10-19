/**
 * Author: Deean
 * Date: 2022-09-10 14:38
 * FileName: algorithm/P1716.cpp
 * Description: 1716. 计算力扣银行的钱
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int sum = 0, week = 1, day = 1;
        for (int i = 1; i <= n; ++i) {
            sum += week + day - 1;
            day++;
            if (day == 8) {
                day = 1;
                week++;
            }
        }
        return sum;
    }
};

int main() {
    auto ans = Solution().totalMoney(20);
    cout << toString(ans) << endl;
    return 0;
}