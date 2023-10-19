/**
 * Author: Deean
 * Date: 2022-09-04 23:20
 * FileName: algorithm/P0258.cpp
 * Description: 258. 各位相加
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int main() {
    auto ans = Solution().addDigits(38);
    cout << ans << endl;
    return 0;
}