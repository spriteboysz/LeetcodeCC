/**
 * Author: Deean
 * Date: 2023-04-14 23:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool divideArray(vector<int> &nums) {
        unordered_map<int, int> map;
        for (const auto &num: nums) {
            map[num]++;
        }
        for (auto [_, v]: map) {
            if (v % 2 == 1) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector<int> nums = {3, 2, 3, 2, 2, 2};
    auto ans = Solution().divideArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
