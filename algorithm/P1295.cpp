/**
 * Author: Deean
 * Date: 2022-09-03 23:31
 * FileName: algorithm/P1295.cpp
 * Description: 1295. 统计位数为偶数的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int> &nums) {
        int cnt = 0;
        for (auto num: nums) {
            if (to_string(num).size() % 2 == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {555, 901, 482, 1771};
    auto ans = Solution().findNumbers(nums);
    cout << ans << endl;
    return 0;
}