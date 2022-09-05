/**
 * Author: Deean
 * Date: 2022-09-05 23:09
 * FileName: algorithm/P0169.cpp
 * Description: 169. 多数元素
 */

#include <leetcode.h>

using namespace std;

class Solution {
private:
    unordered_map<int, int> map;
public:
    int majorityElement(vector<int> &nums) {
        int majority = 0;
        for (auto num: nums) {
            if (++map[num] > nums.size() / 2) {
                majority = num;
                break;
            }
        }
        return majority;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    auto ans = Solution().majorityElement(nums);
    cout << toString(ans) << endl;
    return 0;
}