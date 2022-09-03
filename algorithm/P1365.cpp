/**
 * Author: Deean
 * Date: 2022-09-03 23:12
 * FileName: algorithm/P1365.cpp
 * Description: 
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<int> cnt(101, 0);
        for (auto num: nums) cnt[num]++;
        for (int i = 1; i < 101; ++i) {
            cnt[i] += cnt[i - 1];
        }
        vector<int> ret;
        for (auto num: nums) {
            ret.push_back(num == 0 ? 0 : cnt[num - 1]);
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {6, 5, 4, 8};
    auto ans = Solution().smallerNumbersThanCurrent(nums);
    cout << vectorToString(ans) << endl;
    return 0;
}