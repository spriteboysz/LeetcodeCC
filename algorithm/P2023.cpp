/**
 * Author: Deean
 * Date: 2023-07-19 22:10
 * FileName: algorithm
 * Description:2023. 连接后等于目标字符串的字符串对
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numOfPairs(vector <string> &nums, string target) {
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && nums[i] + nums[j] == target) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> nums = {"777", "7", "77", "77"};
    auto ans = Solution().numOfPairs(nums, "7777");
    cout << toString(ans) << endl;
    return 0;
}
