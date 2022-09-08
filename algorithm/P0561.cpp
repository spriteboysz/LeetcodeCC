/**
 * Author: Deean
 * Date: 2022-09-08 23:33
 * FileName: algorithm/P0561.cpp
 * Description: 561. 数组拆分
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};

int main() {
    vector<int> nums = {6, 2, 6, 5, 1, 2};
    auto ans = Solution().arrayPairSum(nums);
    cout << toString(ans) << endl;
    return 0;
}