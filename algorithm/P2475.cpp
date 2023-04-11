/**
 * Author: Deean
 * Date: 2023-04-11 23:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int> &nums) {
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) continue;
                for (int k = j + 1; k < n; ++k) {
                    if (nums[i] != nums[k] && nums[j] != nums[k]) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {4, 4, 2, 4, 3};
    auto ans = Solution().unequalTriplets(nums);
    cout << toString(ans) << endl;
    return 0;
}
