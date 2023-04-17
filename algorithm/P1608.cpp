/**
 * Author: Deean
 * Date: 2023-04-16 23:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int specialArray(vector<int> &nums) {
        sort(nums.rbegin(), nums.rend());
        for (int i = 1, n = nums.size(); i <= n; ++i) {
            if (nums[i - 1] >= i && (i == n || nums[i] < i)) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {0, 4, 3, 0, 4};
    auto ans = Solution().specialArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
