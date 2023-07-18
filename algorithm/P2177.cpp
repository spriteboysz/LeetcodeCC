/**
 * Author: Deean
 * Date: 2023-07-18 23:05
 * FileName: algorithm
 * Description:2177. 找到和为给定整数的三个连续整数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3 == 0) {
            long long base = num / 3;
            return {base - 1, base, base + 1};
        }
        return {};
    }
};

int main() {
    auto ans = Solution().sumOfThree(33);
    cout << toString(ans) << endl;
    return 0;
}
