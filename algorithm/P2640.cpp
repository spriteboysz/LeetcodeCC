/**
 * Author: Deean
 * Date: 2023-05-12 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<long long> findPrefixScore(vector<int> &nums) {
        int maximum = nums[0];
        vector<long long> pref = {maximum * 2};
        for (int i = 1, n = nums.size(); i < n; ++i) {
            maximum = max(maximum, nums[i]);
            pref.push_back(nums[i] + maximum + pref[i - 1]);
        }
        return pref;
    }
};

int main() {
    vector<int> nums = {2, 3, 7, 5, 10};
    auto ans = Solution().findPrefixScore(nums);
    cout << toString(ans) << endl;
    return 0;
}
