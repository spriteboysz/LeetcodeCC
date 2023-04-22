/**
 * Author: Deean
 * Date: 2023-04-22 15:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int> &nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return a % 2 < b % 2;
        });
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 4};
    auto ans = Solution().sortArrayByParity(nums);
    cout << toString(ans) << endl;
    return 0;
}
