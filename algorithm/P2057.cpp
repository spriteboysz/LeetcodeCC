/**
 * Author: Deean
 * Date: 2022-09-09 00:05
 * FileName: algorithm/P2057.cpp
 * Description: 2057. 值相等的最小索引
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int smallestEqual(vector<int> &nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 10 == nums[i]) return i;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2, 1, 3, 5, 2};
    auto ans = Solution().smallestEqual(nums);
    cout << toString(ans) << endl;
    return 0;
}