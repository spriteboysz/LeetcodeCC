/**
 * Author: Deean
 * Date: 2023-07-23 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool search(vector<int> &nums, int target) {
        for (auto num: nums) {
            if (num == target) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    auto ans = Solution().search(nums, 0);
    cout << toString(ans) << endl;
    return 0;
}
