/**
 * Author: Deean
 * Date: 2023-04-27 23:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        for (int left = 0, right = 0, n = nums.size(); right < n;) {
            if (nums[right]) {
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left++;
            }
            right++;
        }
        cout << toString(nums) << endl;
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution().moveZeroes(nums);
    return 0;
}
