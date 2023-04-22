/**
 * Author: Deean
 * Date: 2023-04-21 23:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    static bool cmp(int a, int b) {
        return abs(a) > abs(b);
    }

    int largestSumAfterKNegations(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end(), cmp);
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] < 0 && k > 0) {
                nums[i] *= -1;
                k--;
            }
        }
        if (k % 2 == 1) nums[n - 1] *= -1;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
        }
        return sum;
    }
};

int main() {
    vector<int> nums = {4, 2, 3};
    auto ans = Solution().largestSumAfterKNegations(nums, 1);
    cout << toString(ans) << endl;
    return 0;
}
