/**
 * Author: Deean
 * Date: 2023-04-14 23:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int> &nums, int key, int k) {
        vector<int> index;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (nums[j] == key && abs(i - j) <= k) {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};

int main() {
    vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    auto ans = Solution().findKDistantIndices(nums, 9, 1);
    cout << toString(ans) << endl;
    return 0;
}
