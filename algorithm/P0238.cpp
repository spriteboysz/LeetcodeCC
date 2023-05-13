/**
 * Author: Deean
 * Date: 2023-05-12 23:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> left(n, 1), right(n, 1);
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }
        vector<int> product;
        for (int i = 0; i < n; ++i) {
            product.push_back(left[i] * right[i]);
        }
        return product;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    auto ans = Solution().productExceptSelf(nums);
    cout << toString(ans) << endl;
    return 0;
}
