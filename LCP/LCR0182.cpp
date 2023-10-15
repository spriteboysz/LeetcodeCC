/**
 * Author: Deean
 * Date: 2023-10-14 19:37
 * FileName: LCP
 * Description: LCR 182. 动态口令
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string dynamicPassword(string password, int target) {
        return password.substr(target) + password.substr(0, target);
    }
};

int main() {
    auto ans = Solution().dynamicPassword("s3cur1tyC0d3", 4);
    cout << toString(ans) << endl;
    return 0;
}