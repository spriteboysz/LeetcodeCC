/**
 * Author: Deean
 * Date: 2023-04-29 14:43
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (auto num: nums) {
            hash[num]++;
        }
        return hash[target];
    }
};

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    auto ans = Solution().search(nums, 8);
    cout << toString(ans) << endl;
    return 0;
}
