/**
 * Author: Deean
 * Date: 2023-04-26 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int cnt = 0, maximum = 0;
        for (auto num: nums) {
            if (num == 1) {
                cnt++;
                maximum = max(maximum, cnt);
            } else {
                cnt = 0;
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    auto ans = Solution().findMaxConsecutiveOnes(nums);
    cout << toString(ans) << endl;
    return 0;
}
