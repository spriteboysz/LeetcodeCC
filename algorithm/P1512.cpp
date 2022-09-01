/**
 * Author: Deean
 * Date: 2022-09-01 23:44
 * FileName: algorithm/P1512.cpp
 * Description: 1512. 好数对的数目
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {1,1,1,1};
    auto ans = Solution().numIdenticalPairs(nums);
    cout << ans << endl;
    return 0;
}