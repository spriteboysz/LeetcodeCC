/**
 * Author: Deean
 * Date: 2022-08-31 23:46
 * FileName: algorithm/P2160.cpp
 * Description: 2160. 拆分数位后四位数字的最小和
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits(4);
        digits[0] = num / 1000;
        digits[1] = (num % 1000) / 100;
        digits[2] = (num % 100) / 10;
        digits[3] = num % 10;
        sort(digits.begin(), digits.end());
        return digits[0] * 10 + digits[1] * 10 + digits[2] + digits[3];
    }
};

int main() {
    auto ans = Solution().minimumSum(4009);
    cout << ans << endl;
    return 0;
}