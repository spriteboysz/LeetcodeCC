/**
 * Author: Deean
 * Date: 2022-09-03 21:04
 * FileName: algorithm/P2176.cpp
 * Description: 2176. 统计数组中相等且可以被整除的数对
 */

#include <iostream>
#include <vector>
#include <codec.h>

using namespace std;

class Solution {
public:
    int countPairs(vector<int> &nums, int k) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j] && (i * j) % k == 0) cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 2, 2, 1, 3};
    auto ans = Solution().countPairs(nums, 2);
    cout << ans << endl;
    return 0;
}