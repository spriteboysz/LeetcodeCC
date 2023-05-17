/**
 * Author: Deean
 * Date: 2023-05-16 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int matrixSum(vector <vector<int>> &nums) {
        for (auto &vec: nums) {
            sort(vec.rbegin(), vec.rend());
        }
        int score = 0;
        for (int j = 0, m = nums[0].size(); j < m; ++j) {
            int maximum = -1;
            for (int i = 0, n = nums.size(); i < n; ++i) {
                maximum = max(maximum, nums[i][j]);
            }
            score += maximum;
        }
        return score;
    }
};

int main() {
    auto nums = stringToVector2("[[7,2,1],[6,4,2],[6,5,3],[3,2,1]]");
    auto ans = Solution().matrixSum(nums);
    cout << toString(ans) << endl;
    return 0;
}
