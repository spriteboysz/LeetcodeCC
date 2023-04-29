/**
 * Author: Deean
 * Date: 2023-04-29 19:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors) {
        int maximum = 0, maxCnt = -1;
        for (auto divisor: divisors) {
            int cnt = 0;
            for (auto num: nums) {
                if (num % divisor == 0) cnt++;
            }
            if (cnt > maxCnt || cnt == maxCnt && divisor < maximum) {
                maximum = divisor;
                maxCnt = cnt;
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {20, 14, 21, 10};
    vector<int> divisors = {5, 7, 5};
    auto ans = Solution().maxDivScore(nums, divisors);
    cout << toString(ans) << endl;
    return 0;
}
