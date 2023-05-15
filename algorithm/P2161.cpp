/**
 * Author: Deean
 * Date: 2023-05-14 20:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int> &nums, int pivot) {
        vector<int> lt, eq, gt;
        for (auto num: nums) {
            if (num > pivot) {
                gt.push_back(num);
            } else if (num < pivot) {
                lt.push_back(num);
            } else {
                eq.push_back(num);
            }
        }
        int pos = 0;
        for (auto vec: {lt, eq, gt}) {
            for (auto num: vec) {
                nums[pos++] = num;
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    auto ans = Solution().pivotArray(nums, 10);
    cout << toString(ans) << endl;
    return 0;
}
