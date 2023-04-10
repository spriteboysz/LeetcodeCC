/**
 * Author: Deean
 * Date: 2023-04-09 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> leftRigthDifference(vector<int> &nums) {
        int n = nums.size();
        vector<int> left(n + 1, 0), right(n + 1, 0);
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] + nums[i - 1];
        }
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] + nums[i + 1];
        }
        vector<int> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = abs(left[i] - right[i]);
        }
        return diff;
    }
};

int main() {
    vector<int> nums = {10, 4, 8, 3};
    auto ans = Solution().leftRigthDifference(nums);
    cout << toString(ans) << endl;
    return 0;
}
