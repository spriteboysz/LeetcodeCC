/**
 * Author: Deean
 * Date: 2023-04-16 15:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getMinDistance(vector<int> &nums, int target, int start) {
        int n = nums.size();
        int minimum = n;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == target) {
                minimum = min(minimum, abs(i - start));
            }
        }
        return minimum;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    auto ans = Solution().getMinDistance(nums, 5, 3);
    cout << toString(ans) << endl;
    return 0;
}
