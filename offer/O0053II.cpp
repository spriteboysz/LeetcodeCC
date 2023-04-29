/**
 * Author: Deean
 * Date: 2023-04-29 14:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int sum = 0, n = nums.size();
        for (auto num: nums) {
            sum += num;
        }
        return n * (n + 1) / 2 - sum;
    }
};

int main() {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    auto ans = Solution().missingNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
