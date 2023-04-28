/**
 * Author: Deean
 * Date: 2023-04-28 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int fast = 1, slow = 1;
        while (fast < n) {
            if (nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};

int main() {
    vector<int> nums = {1, 1, 2};
    auto ans = Solution().removeDuplicates(nums);
    cout << toString(ans) << endl;
    return 0;
}
