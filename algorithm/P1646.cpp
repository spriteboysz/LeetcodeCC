/**
 * Author: Deean
 * Date: 2023-04-17 23:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        vector<int> nums(n + 1, 0);
        nums[0] = 0;
        nums[1] = 1;
        for (int i = 2; i <= n; ++i) {
            nums[i] = nums[i / 2] + i % 2 * nums[i / 2 + 1];
        }
        return *max_element(nums.begin(), nums.end());
    }
};

int main() {
    auto ans = Solution().getMaximumGenerated(7);
    cout << toString(ans) << endl;
    return 0;
}
