/**
 * Author: Deean
 * Date: 2022-09-10 11:53
 * FileName: algorithm/P1822.cpp
 * Description: 1822. 数组元素积的符号
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int arraySign(vector<int> &nums) {
        int negative = 0;
        for (auto num: nums) {
            if (num == 0) return 0;
            if (num < 0) negative++;
        }
        return negative % 2 == 1 ? -1 : 1;
    }
};

int main() {
    vector<int> nums = stringToVector("[-1,1,-1,1,-1]");
    auto ans = Solution().arraySign(nums);
    cout << toString(ans) << endl;
    return 0;
}