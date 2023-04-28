/**
 * Author: Deean
 * Date: 2023-04-28 21:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> set;
        for (auto num: nums) {
            if (set.count(num)) {
                return true;
            }
            set.emplace(num);
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    auto ans = Solution().containsDuplicate(nums);
    cout << toString(ans) << endl;
    return 0;
}
