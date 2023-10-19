/**
 * Author: Deean
 * Date: 2022-09-04 17:01
 * FileName: algorithm/P1748.cpp
 * Description: 1748. 唯一元素的和
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) map[num]++;
        int sum = 0;
        for (auto pair: map) {
            if (pair.second == 1) sum += pair.first;
        }
        return sum;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 1};
    auto ans = Solution().sumOfUnique(nums);
    cout << ans << endl;    // 14
    return 0;
}