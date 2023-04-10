/**
 * Author: Deean
 * Date: 2023-04-10 23:15
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumCount(vector<int> &nums) {
        int positive = 0, negative = 0;
        for (auto &num: nums) {
            if (num > 0) positive++;
            if (num < 0) negative++;
        }
        return max(positive, negative);
    }
};

int main() {
    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};
    auto ans = Solution().maximumCount(nums);
    cout << toString(ans) << endl;
    return 0;
}
