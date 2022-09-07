/**
 * Author: Deean
 * Date: 2022-09-07 23:45
 * FileName: algorithm/P0448.cpp
 * Description: 448. 找到所有数组中消失的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> numbers(nums.size() + 1, 0);
        for (auto num: nums) numbers[num] += 1;
        vector<int> vec;
        for (int i = 1; i <= nums.size(); ++i) {
            if (numbers[i] == 0) vec.push_back(i);
        }
        return vec;
    }
};

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    auto ans = Solution().findDisappearedNumbers(nums);
    cout << toString(ans) << endl;
    return 0;
}