/**
 * Author: Deean
 * Date: 2023-04-29 14:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int start = -1, end = -1;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (start == -1 && nums[i] == target) {
                start = i;
                end = i;
            } else if (nums[i] == target) {
                end = i;
            }
        }
        return {start, end};
    }
};

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    auto ans = Solution().searchRange(nums, 8);
    cout << toString(ans) << endl;
    return 0;
}
