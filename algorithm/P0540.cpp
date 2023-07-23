/**
 * Author: Deean
 * Date: 2023-07-23 11:55
 * FileName: algorithm
 * Description:540. 有序数组中的单一元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int single = 0;
        for (auto &num: nums) {
            single ^= num;
        }
        return single;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    auto ans = Solution().singleNonDuplicate(nums);
    cout << toString(ans) << endl;
    return 0;
}
