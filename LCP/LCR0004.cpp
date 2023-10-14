/**
 * Author: Deean
 * Date: 2023-10-10 23:37
 * FileName: LCP
 * Description: LCR 004. 只出现一次的数字 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        unordered_map<int, int> map;
        for (const auto &num: nums) {
            map[num]++;
        }
        for (const auto &num: nums) {
            if (map[num] == 1) {
                return num;
            }
        }
        return -1;
    }
};

int main() {
    auto nums = stringToVector("[0,1,0,1,0,1,100]");
    auto ans = Solution().singleNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}