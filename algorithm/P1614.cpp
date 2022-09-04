/**
 * Author: Deean
 * Date: 2022-09-04 10:21
 * FileName: algorithm/P1614.cpp
 * Description: 1614. 括号的最大嵌套深度
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int maximum = 0, cur = 0;
        for (auto c: s) {
            if (c == '(') cur++;
            else if (c == ')') cur--;
            maximum = max(maximum, cur);
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxDepth("(1)+((2))+(((3)))");
    cout << ans << endl;
    return 0;
}