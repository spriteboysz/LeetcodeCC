/**
 * Author: Deean
 * Date: 2023-04-22 22:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (nums[i] == target) return i;
            if (nums[i] > target) break;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    auto ans = Solution().search(nums, 9);
    cout << toString(ans) << endl;
    return 0;
}
