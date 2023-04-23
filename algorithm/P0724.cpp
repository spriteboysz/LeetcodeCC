/**
 * Author: Deean
 * Date: 2023-04-22 22:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (auto num: nums) {
            sum += num;
        }
        int acc = 0;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (2 * acc + nums[i] == sum) {
                return i;
            }
            acc += nums[i];
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    auto ans = Solution().pivotIndex(nums);
    cout << toString(ans) << endl;
    return 0;
}
