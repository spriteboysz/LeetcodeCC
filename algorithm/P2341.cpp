/**
 * Author: Deean
 * Date: 2022-09-03 21:15
 * FileName: algorithm/P2341.cpp
 * Description: 2341. 数组能形成多少数对
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) {
            map[num]++;
        }
        int cnt = 0;
        for (auto pair: map) {
            cnt += pair.second % 2;
        }
        return {(int) (nums.size() - cnt) / 2, cnt};
    }
};

int main() {
    vector<int> nums = {1, 3, 2, 1, 3, 2, 2};
    auto ans = Solution().numberOfPairs(nums);
    cout << vectorToString(ans) << endl;
    return 0;
}