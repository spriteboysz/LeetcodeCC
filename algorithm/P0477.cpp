/**
 * Author: Deean
 * Date: 2023-07-23 14:36
 * FileName: algorithm
 * Description:477. 汉明距离总和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int> &nums) {
        int hamming = 0;
        for (int i = 0, n = nums.size(); i < 30; ++i) {
            int c = 0;
            for (auto num: nums) {
                c += (num >> i) & 1;
            }
            hamming += c * (n - c);
        }
        return hamming;
    }
};

int main() {
    vector<int> nums = {4, 14, 2};
    auto ans = Solution().totalHammingDistance(nums);
    cout << toString(ans) << endl;
    return 0;
}
