/**
 * Author: Deean
 * Date: 2022-09-09 23:38
 * FileName: algorithm/P2357.cpp
 * Description: 2357. 使数组中所有元素都等于零
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int> &nums) {
        unordered_set<int> set;
        for (auto num: nums) {
            if (num != 0) set.insert(num);
        }
        return set.size();
    }
};

int main() {
    vector<int> nums = {1, 5, 0, 3, 5};
    auto ans = Solution().minimumOperations(nums);
    cout << toString(ans) << endl;
    return 0;
}