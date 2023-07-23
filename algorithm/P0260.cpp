/**
 * Author: Deean
 * Date: 2023-07-23 15:24
 * FileName: algorithm
 * Description:260. 只出现一次的数字 III

 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) {
            map[num]++;
        }
        vector<int> single;
        for (auto [k, v]: map) {
            if (v == 1) {
                single.push_back(k);
            }
        }
        return single;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    auto ans = Solution().singleNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
