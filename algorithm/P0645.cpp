/**
 * Author: Deean
 * Date: 2023-04-23 22:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        int n = nums.size();
        vector<int> res(n + 1);
        int a, b;
        for (auto num: nums) {
            res[num]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (res[i] == 2) a = i;
            if (res[i] == 0) b = i;
        }
        return {a, b};
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 4};
    auto ans = Solution().findErrorNums(nums);
    cout << toString(ans) << endl;
    return 0;
}
