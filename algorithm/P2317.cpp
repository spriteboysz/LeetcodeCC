/**
 * Author: Deean
 * Date: 2023-05-12 21:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumXOR(vector<int> &nums) {
        int maximum = 0;
        for (auto num: nums) {
            maximum |= num;
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 9, 2};
    auto ans = Solution().maximumXOR(nums);
    cout << toString(ans) << endl;
    return 0;
}
