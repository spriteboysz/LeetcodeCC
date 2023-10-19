/**
 * Author: Deean
 * Date: 2022-09-03 21:09
 * FileName: algorithm/P2089.cpp
 * Description: 2089. 找出数组排序后的目标下标
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> index;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) index.push_back(i);
        }
        return index;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 2, 3};
    auto ans = Solution().targetIndices(nums, 5);
    cout << vectorToString(ans) << endl;
    return 0;
}