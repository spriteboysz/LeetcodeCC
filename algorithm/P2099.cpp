/**
 * Author: Deean
 * Date: 2023-04-15 14:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int> &nums, int k) {
        vector<int> nums2 = nums;
        sort(nums2.rbegin(), nums2.rend());
        unordered_map<int, int> map;
        for (int i = 0; i < k; ++i) {
            map[nums2[i]]++;
        }
        vector<int> sub;
        for (auto num: nums) {
            if (map[num] > 0) {
                sub.push_back(num);
                map[num]--;
            }
        }
        return sub;
    }
};

int main() {
    vector<int> nums = {2, 1, 3, 3};
    auto ans = Solution().maxSubsequence(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
