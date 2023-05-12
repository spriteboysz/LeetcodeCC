/**
 * Author: Deean
 * Date: 2023-05-12 22:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int> &nums) {
        vector<int> diff;
        unordered_set<int> left, right;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            right.clear();
            left.insert(nums[i]);
            for (int j = i + 1; j < n; ++j) {
                right.insert(nums[j]);
            }
            diff.push_back(left.size() - right.size());
        }
        return diff;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    auto ans = Solution().distinctDifferenceArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
