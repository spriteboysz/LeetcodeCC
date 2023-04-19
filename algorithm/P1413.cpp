/**
 * Author: Deean
 * Date: 2023-04-18 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minStartValue(vector<int> &nums) {
        int acc = 0, minimum = 0;
        for (auto num: nums) {
            acc += num;
            minimum = min(minimum, acc);
        }
        return -minimum + 1;
    }
};

int main() {
    vector<int> nums = {-3, 2, -3, 4, 2};
    auto ans = Solution().minStartValue(nums);
    cout << toString(ans) << endl;
    return 0;
}
