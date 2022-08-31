/**
 * Author: Deean
 * Date: 2022-08-31 22:27
 * FileName: algorithm/P1920.cpp
 * Description: 
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int> &nums) {
        vector<int> target(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            target[i] = nums[nums[i]];
        }
        return target;
    }
};

int main() {
    vector<int> nums = {5, 0, 1, 2, 3, 4};
    auto ans = Solution().buildArray(nums);
    for (int num : ans) cout << num << " ";
    cout << endl;
    return 0;
}