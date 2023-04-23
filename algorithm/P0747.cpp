/**
 * Author: Deean
 * Date: 2023-04-22 21:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int dominantIndex(vector<int> &nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        int max1 = -1, max2 = -1, index = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                index = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }
        return max1 >= max2 * 2 ? index : -1;
    }
};

int main() {
    vector<int> nums = {3, 6, 1, 0};
    auto ans = Solution().dominantIndex(nums);
    cout << toString(ans) << endl;
    return 0;
}
