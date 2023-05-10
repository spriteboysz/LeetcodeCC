/**
 * Author: Deean
 * Date: 2023-05-09 23:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minMoves(vector<int> &nums) {
        int minimum = nums[0];
        for (auto num: nums) {
            minimum = min(minimum, num);
        }
        int cnt = 0;
        for (auto num: nums) {
            cnt += num - minimum;
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    auto ans = Solution().minMoves(nums);
    cout << toString(ans) << endl;
    return 0;
}
