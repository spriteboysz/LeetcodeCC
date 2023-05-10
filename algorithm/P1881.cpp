/**
 * Author: Deean
 * Date: 2023-05-10 22:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int reductionOperations(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0, sum = 0;
        for (int i = 1, n = nums.size(); i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                cnt++;
            }
            sum += cnt;
        }
        return sum;
    }
};

int main() {
    vector<int> nums = {5, 1, 3};
    auto ans = Solution().reductionOperations(nums);
    cout << toString(ans) << endl;
    return 0;
}
