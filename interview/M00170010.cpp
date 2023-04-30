/**
 * Author: Deean
 * Date: 2023-04-29 22:23
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for (auto num: nums) {
            hash[num]++;
            if (hash[num] > n / 2) {
                return num;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 9, 5, 9, 5, 5, 5};
    auto ans = Solution().majorityElement(nums);
    cout << toString(ans) << endl;
    return 0;
}
