/**
 * Author: Deean
 * Date: 2023-04-15 11:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findFinalValue(vector<int> &nums, int original) {
        unordered_set<int> set;
        for (const auto &num: nums) {
            set.emplace(num);
        }
        while (set.count(original) > 0) {
            original *= 2;
        }
        return original;
    }
};

int main() {
    vector<int> nums = {5, 3, 6, 1, 12};
    auto ans = Solution().findFinalValue(nums, 3);
    cout << toString(ans) << endl;
    return 0;
}
