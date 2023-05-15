/**
 * Author: Deean
 * Date: 2023-05-15 22:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minImpossibleOR(vector<int> &nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        for (int i = 1;; i *= 2) {
            if (!set.count(i)) {
                return i;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 1};
    auto ans = Solution().minImpossibleOR(nums);
    cout << toString(ans) << endl;
    return 0;
}
