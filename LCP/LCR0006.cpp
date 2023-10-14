/**
 * Author: Deean
 * Date: 2023-10-10 23:59
 * FileName: LCP
 * Description: LCR 006. 两数之和 II - 输入有序数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] < target) {
                left++;
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                return {left, right};
            }
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 6, 10};
    auto ans = Solution().twoSum(nums, 8);
    cout << toString(ans) << endl;
    return 0;
}