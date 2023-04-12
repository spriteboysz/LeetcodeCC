/**
 * Author: Deean
 * Date: 2023-04-12 21:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findMaxK(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while (left < right && nums[left] < 0 && nums[right] > 0) {
            if (nums[left] + nums[right] < 0) {
                left++;
            } else if (nums[left] + nums[right] > 0) {
                right--;
            } else {
                return nums[right];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1, 10, 6, 7, -7, 1};
    auto ans = Solution().findMaxK(nums);
    cout << toString(ans) << endl;
    return 0;
}
