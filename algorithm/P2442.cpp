/**
 * Author: Deean
 * Date: 2023-07-16 22:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int> &nums) {
        unordered_set<int> visited;
        for (auto num: nums) {
            visited.emplace(num);
            int rev = 0, cur = num;
            while (cur) {
                rev = rev * 10 + cur % 10;
                cur = floor(cur / 10);
            }
            visited.emplace(rev);
        }
        return visited.size();
    }
};

int main() {
    vector<int> nums = {1, 13, 10, 12, 31};
    auto ans = Solution().countDistinctIntegers(nums);
    cout << toString(ans) << endl;
    return 0;
}
