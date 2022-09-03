/**
 * Author: Deean
 * Date: 2022-09-03 17:04
 * FileName: algorithm/P1913.cpp
 * Description: 1913. 两个数对之间的最大乘积差
 */

#include <iostream>
#include <vector>
#include <codec.h>

using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int> &nums) {
        int maximum1 = max(nums[0], nums[1]), maximum2 = min(nums[0], nums[1]);
        int minimum1 = min(nums[0], nums[1]), minimum2 = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); ++i) {
            int cur = nums[i];
            if (cur > maximum1) {
                maximum2 = maximum1;
                maximum1 = cur;
            } else if (cur > maximum2) {
                maximum2 = cur;
            }
            if (cur < minimum1) {
                minimum2 = minimum1;
                minimum1 = cur;
            } else if (cur < minimum2) {
                minimum2 = cur;
            }
        }
        return maximum1 * maximum2 - minimum1 * minimum2;
    }
};

int main() {
    vector<int> nums = {4, 2, 5, 9, 7, 4, 8};
    auto ans = Solution().maxProductDifference(nums);
    cout << ans << endl;
    return 0;
}