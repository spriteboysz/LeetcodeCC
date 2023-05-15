/**
 * Author: Deean
 * Date: 2023-05-15 23:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums) {
        int maximum = nums[0];
        for (auto num: nums) {
            maximum = max(maximum, num);
        }
        int longest = 1, cnt = 0;
        for (auto num: nums) {
            if (num == maximum) {
                cnt++;
            } else {
                longest = max(cnt, longest);
                cnt = 0;
            }
        }
        longest = max(cnt, longest);
        return longest;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    auto ans = Solution().longestSubarray(nums);
    cout << toString(ans) << endl;
    return 0;
}
