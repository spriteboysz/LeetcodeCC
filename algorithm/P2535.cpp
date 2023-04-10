/**
 * Author: Deean
 * Date: 2023-04-10 23:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int> &nums) {
        int sum1 = 0, sum2 = 0;
        for (auto num: nums) {
            sum1 += num;
            while (num > 0) {
                sum2 += num % 10;
                num /= 10;
            }
        }
        return abs(sum1 - sum2);
    }
};

int main() {
    vector<int> nums = {1, 15, 6, 3};
    auto ans = Solution().differenceOfSum(nums);
    cout << toString(ans) << endl;
    return 0;
}
