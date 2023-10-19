/**
 * Author: Deean
 * Date: 2022-09-08 23:45
 * FileName: algorithm/P1979.cpp
 * Description: 1979. 找出数组的最大公约数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int findGCD(vector<int> &nums) {
        int maximum = 0, minimum = 1001;
        for (auto num: nums) {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
        }
        return gcd(maximum, minimum);
    }
};

int main() {
    vector<int> nums = {7, 5, 6, 8, 3};
    auto ans = Solution().findGCD(nums);
    cout << toString(ans) << endl;
    return 0;
}