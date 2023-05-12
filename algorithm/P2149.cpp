/**
 * Author: Deean
 * Date: 2023-05-12 22:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int> &nums) {
        vector<int> positive, negative;
        for (auto num: nums) {
            if (num > 0) {
                positive.push_back(num);
            } else {
                negative.push_back(num);
            }
        }
        for (int i = 0, pos = 0, n = nums.size(); i < n;) {
            nums[i++] = positive[pos];
            nums[i++] = negative[pos++];
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    auto ans = Solution().rearrangeArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
