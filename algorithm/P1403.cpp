/**
 * Author: Deean
 * Date: 2023-04-18 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int> &nums) {
        sort(nums.begin(), nums.end(), greater());
        int sum = 0, acc = 0;
        for (auto num: nums) {
            sum += num;
        }
        vector<int> sequence;
        for (auto num: nums) {
            acc += num;
            sequence.push_back(num);
            if (acc > sum - acc) {
                break;
            }
        }
        return sequence;
    }
};

int main() {
    vector<int> nums = {4, 4, 7, 6, 7};
    auto ans = Solution().minSubsequence(nums);
    cout << toString(ans) << endl;
    return 0;
}
