/**
 * Author: Deean
 * Date: 2023-04-15 16:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countQuadruplets(vector<int> &nums) {
        int cnt = 0;
        for (int a = 0, n = nums.size(); a < n; ++a) {
            for (int b = a + 1; b < n; ++b) {
                for (int c = b + 1; c < n; ++c) {
                    for (int d = c + 1; d < n; ++d) {
                        if (nums[a] + nums[b] + nums[c] == nums[d]) {
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 3, 5};
    auto ans = Solution().countQuadruplets(nums);
    cout << toString(ans) << endl;
    return 0;
}
