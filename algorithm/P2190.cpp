/**
 * Author: Deean
 * Date: 2023-04-14 23:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int mostFrequent(vector<int> &nums, int key) {
        unordered_map<int, int> map;
        for (int i = 1, n = nums.size(); i < n; ++i) {
            if (nums[i - 1] == key) {
                map[nums[i]]++;
            }
        }
        int maximum = 0;
        for (auto [_, v]: map) {
            maximum = max(maximum, v);
        }
        for (auto [k, v]: map) {
            if (v == maximum) {
                return k;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2, 2, 2, 2, 3};
    auto ans = Solution().mostFrequent(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
