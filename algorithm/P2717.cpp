/**
 * Author: Deean
 * Date: 2023-06-22 23:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int semiOrderedPermutation(vector<int> &nums) {
        int n = nums.size(), index1 = -1, index2 = -1;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) index1 = i;
            if (nums[i] == n) index2 = i;
        }
        int cnt = index1 + n - 1 - index2;
        return index2 < index1 ? cnt - 1 : cnt;
    }
};

int main() {
    auto nums = stringToVector("[2,4,1,3]");
    auto ans = Solution().semiOrderedPermutation(nums);
    cout << toString(ans) << endl;
    return 0;
}
