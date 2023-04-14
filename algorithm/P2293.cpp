/**
 * Author: Deean
 * Date: 2023-04-14 21:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minMaxGame(vector<int> &nums) {
        int n = nums.size();
        while (n > 1) {
            for (int i = 0; i < n / 2; ++i) {
                if (i % 2 == 0) {
                    nums[i] = min(nums[2 * i], nums[2 * i + 1]);
                } else {
                    nums[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            n /= 2;
        }
        return nums[0];
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 2, 4, 8, 2, 2};
    auto ans = Solution().minMaxGame(nums);
    cout << toString(ans) << endl;
    return 0;
}
