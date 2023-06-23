/**
 * Author: Deean
 * Date: 2023-06-23 16:22
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isStraight(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int king = 0;
        for (int i = 0; i < 5; ++i) {
            if (nums[i] == 0) {
                king++;
            } else if (i > 0 && nums[i] == nums[i - 1]) {
                return false;
            }
        }
        return nums[4] - nums[king] - 4 <= 0;
        // return nums[4] - nums[king] + 1 - (5 - king) <= king;
    }
};

int main() {
    vector<int> nums = {1, 2, 0, 0, 5};
    auto ans = Solution().isStraight(nums);
    cout << toString(ans) << endl;
    return 0;
}
