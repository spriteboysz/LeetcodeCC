/**
 * Author: Deean
 * Date: 2023-07-19 22:15
 * FileName: algorithm
 * Description:1863. 找出所有子集的异或总和再求和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int> &nums) {
        int t = 0;
        for (auto num: nums) {
            t |= num;
        }
        return t << (nums.size() - 1);
    }
};

int main() {
    vector<int> nums = {1, 3};
    auto ans = Solution().subsetXORSum(nums);
    cout << toString(ans) << endl;
    return 0;
}
