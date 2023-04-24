/**
 * Author: Deean
 * Date: 2023-04-23 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1] * nums[n - 1], nums[n - 3] * nums[n - 2] * nums[n - 1]);
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    auto ans = Solution().maximumProduct(nums);
    cout << toString(ans) << endl;
    return 0;
}
