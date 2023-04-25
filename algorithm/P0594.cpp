/**
 * Author: Deean
 * Date: 2023-04-24 23:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findLHS(vector<int> &nums) {
        unordered_map<int, int> hash;
        for (auto num: nums) {
            hash[num]++;
        }
        int maximum = 0;
        for (auto [k, v]: hash) {
            if (hash.count(k + 1)) {
                maximum = max(maximum, v + hash[k + 1]);
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
    auto ans = Solution().findLHS(nums);
    cout << toString(ans) << endl;
    return 0;
}
