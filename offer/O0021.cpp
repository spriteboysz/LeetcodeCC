/**
 * Author: Deean
 * Date: 2023-04-29 14:02
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int> &nums) {
        vector<int> even, odd;
        for (auto num: nums) {
            if (num % 2 == 0) {
                even.push_back(num);
            } else {
                odd.push_back(num);
            }
        }
        int pos1 = 0, pos2 = 0;
        nums.clear();
        while (pos1 < odd.size()) {
            nums.push_back(odd[pos1++]);
        }
        while (pos2 < even.size()) {
            nums.push_back(even[pos2++]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    auto ans = Solution().exchange(nums);
    cout << toString(ans) << endl;
    return 0;
}
