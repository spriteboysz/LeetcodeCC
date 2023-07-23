/**
 * Author: Deean
 * Date: 2023-07-22 23:06
 * FileName: algorithm
 * Description:912. 排序数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 1, 1, 2, 0, 0};
    auto ans = Solution().sortArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
