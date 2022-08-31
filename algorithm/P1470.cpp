/**
 * Author: Deean
 * Date: 2022-08-31 23:54
 * FileName: algorithm/P1470.cpp
 * Description: 1470. 重新排列数组
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n) {
        vector<int> target(n * 2);
        for (int i = 0; i < n; ++i) {
            target[i * 2] = nums[i];
            target[2 * i + 1] = nums[i + n];
        }
        return target;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
    auto ans = Solution().shuffle(nums, 4);
    for (int num: ans) cout << num << " ";
    cout << endl;
    return 0;
}