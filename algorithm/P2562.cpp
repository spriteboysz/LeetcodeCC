/**
 * Author: Deean
 * Date: 2023-04-09 22:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int> &nums) {
        int n = nums.size();
        long long val = 0;
        for (int i = 0; i < n / 2; ++i) {
            int m = to_string(nums[n - 1 - i]).size();
            val += nums[i] * pow(10, m) + nums[n - 1 - i];
        }
        if (n % 2 == 1) {
            val += nums[n / 2];
        }
        return val;
    }
};

int main() {
    vector<int> nums = {5, 14, 13, 8, 12};
    auto ans = Solution().findTheArrayConcVal(nums);
    cout << toString(ans) << endl;
    return 0;
}
