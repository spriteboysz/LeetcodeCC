/**
 * Author: Deean
 * Date: 2023-04-29 22:26
 * FileName: interview
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
        return (n + 1) * n / 2 - sum;
    }
};

int main() {
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    auto ans = Solution().missingNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
