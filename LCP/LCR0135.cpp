/**
 * Author: Deean
 * Date: 2023-10-13 22:58
 * FileName: LCP
 * Description: LCR 135. 报数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> countNumbers(int cnt) {
        vector<int> nums;
        for (int i = 1, n = pow(10, cnt); i < n; ++i) {
            nums.push_back(i);
        }
        return nums;
    }
};

int main() {
    auto ans = Solution().countNumbers(2);
    cout << toString(ans) << endl;
    return 0;
}