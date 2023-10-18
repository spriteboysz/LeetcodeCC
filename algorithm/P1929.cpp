/**
 * Author: Deean
 * Date: 2022-08-30 23:15
 * FileName: algorithm/P1929.cpp
 * Description: 1929. 数组串联
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int> &nums) {
        for (int i = 0, n = nums.size(); i < n; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 3, 2, 1};
    auto ans = Solution().getConcatenation(nums);
    for (int an: ans) {
        cout << an << endl;
    }

    return 0;
}