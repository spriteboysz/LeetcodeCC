/**
 * Author: Deean
 * Date: 2023-04-18 22:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int> &nums, int k) {
        int prev = -1;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (nums[i] == 1) {
                if (prev != -1 && i - prev - 1 < k) {
                    return false;
                }
                prev = i;
            }
        }
        return true;
    }
};

int main() {
    vector<int> nums = {1, 0, 0, 0, 1, 0, 0, 1};
    auto ans = Solution().kLengthApart(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
