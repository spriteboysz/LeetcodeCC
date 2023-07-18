/**
 * Author: Deean
 * Date: 2023-07-18 23:13
 * FileName: algorithm
 * Description:2150. 找出数组中的所有孤独数字
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findLonely(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) {
            if (map[num] > 0) {
                map[num] += 1;
            } else {
                map[num] = 1;
            }
        }
        vector<int> lonely;
        for (auto [k, v]: map) {
            if (v == 1 && map.count(k - 1) == 0 && map.count(k + 1) == 0) {
                lonely.push_back(k);
            }
        }
        return lonely;
    }
};

int main() {
    vector<int> nums = {10, 6, 5, 8};
    auto ans = Solution().findLonely(nums);
    cout << toString(ans) << endl;
    return 0;
}
