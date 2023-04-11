/**
 * Author: Deean
 * Date: 2023-04-11 23:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int> &nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int cnt = 0;
        for (auto &num: nums) {
            if (num == 0) {
                cnt++;
            }
        }
        vector<int> res;
        for (auto &num: nums) {
            if (num != 0) {
                res.push_back(num);
            }
        }
        for (int i = 0; i < cnt; ++i) {
            res.push_back(0);
        }
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    auto ans = Solution().applyOperations(nums);
    cout << toString(ans) << endl;
    return 0;
}
