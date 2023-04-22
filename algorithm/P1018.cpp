/**
 * Author: Deean
 * Date: 2023-04-21 22:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int> &nums) {
        vector<bool> div;
        int prefix = 0;
        for (auto num: nums) {
            prefix = (prefix * 2 + num) % 5;
            div.push_back(prefix == 0);
        }
        return div;
    }
};

int main() {
    vector<int> nums = {0, 1, 1};
    auto ans = Solution().prefixesDivBy5(nums);
    cout << toString(ans) << endl;
    return 0;
}
