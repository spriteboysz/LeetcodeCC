/**
 * Author: Deean
 * Date: 2023-04-22 15:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int> &nums) {
        vector<int> even, odd;
        for (auto num: nums) {
            if (num % 2 == 0) {
                even.push_back(num);
            } else {
                odd.push_back(num);
            }
        }
        for (int i = 0, pos1 = 0, pos2 = 0, n = nums.size(); i < n; i += 2) {
            nums[i] = even[pos1++];
            nums[i + 1] = odd[pos2++];
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {4, 2, 5, 7};
    auto ans = Solution().sortArrayByParityII(nums);
    cout << toString(ans) << endl;
    return 0;
}
