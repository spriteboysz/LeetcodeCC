/**
 * Author: Deean
 * Date: 2022-09-07 23:15
 * FileName: algorithm/P0268.cpp
 * Description: 268. 丢失的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        vector<int> number(nums.size() + 1, 0);
        for (auto num: nums) number[num]++;
        for (int i = 0; i <= nums.size(); ++i) {
            if (number[i] == 0) return i;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    auto ans = Solution().missingNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}