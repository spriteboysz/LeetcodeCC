/**
 * Author: Deean
 * Date: 2023-04-15 16:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int> &nums) {
        int sum = 0, acc = 0;
        for (auto num: nums) {
            sum += num;
        }
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
    vector<int> nums = {2, 3, -1, 8, 4};
    auto ans = Solution().findMiddleIndex(nums);
    cout << toString(ans) << endl;
    return 0;
}
