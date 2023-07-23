/**
 * Author: Deean
 * Date: 2023-07-23 15:48
 * FileName: algorithm
 * Description:229. 多数元素 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) {
            map[num]++;
        }
        vector<int> majority;
        int m = floor(nums.size() / 3);
        for (auto [k, v]: map) {
            if (v > m) {
                majority.push_back(k);
            }
        }
        return majority;
    }
};

int main() {
    vector<int> nums = {3, 2, 3};
    auto ans = Solution().majorityElement(nums);
    cout << toString(ans) << endl;
    return 0;
}
