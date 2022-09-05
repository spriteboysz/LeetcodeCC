/**
 * Author: Deean
 * Date: 2022-09-05 23:02
 * FileName: offer/O0039.cpp
 * Description: 剑指 Offer 39. 数组中出现次数超过一半的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
private:
    unordered_map<int, int> map;
public:
    int majorityElement(vector<int> &nums) {
        int majority = -1;
        for (int num: nums) {
            map[num]++;
            if (map[num] > nums.size() / 2) {
                majority = num;
                break;
            }
        }
        return majority;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    auto ans = Solution().majorityElement(nums);
    cout << toString(ans) << endl;
    return 0;
}