/**
 * Author: Deean
 * Date: 2023-04-15 20:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int> &nums) {
        nums.insert(nums.begin(), 0);
        nums.push_back(1001);
        bool flag = true;
        for (int i = 1, n = nums.size(); i < n; ++i) {
            if (nums[i - 1] >= nums[i]) {
                if (flag) {
                    if (nums[i - 1] < nums[i + 1] || nums[i] > nums[i - 2]) {
                        flag = false;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<int> nums = {1, 2, 10, 5, 7};
    auto ans = Solution().canBeIncreasing(nums);
    cout << toString(ans) << endl;
    return 0;
}
