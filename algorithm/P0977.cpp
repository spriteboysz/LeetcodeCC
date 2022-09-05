/**
 * Author: Deean
 * Date: 2022-09-05 23:57
 * FileName: algorithm/P0977.cpp
 * Description: 977. 有序数组的平方
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int> vec;
        for (auto num: nums) vec.push_back(num * num);
        sort(vec.begin(), vec.end());
        return vec;
    }
};

int main() {
    vector<int> nums = {-7, -3, 2, 3, 11};
    auto ans = Solution().sortedSquares(nums);
    cout << toString(ans) << endl;
    return 0;
}