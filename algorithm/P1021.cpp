/**
 * Author: Deean
 * Date: 2022-09-04 13:43
 * FileName: algorithm/P1021.cpp
 * Description: 1021. 删除最外层的括号
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ret = "";
        int level = 0;
        for (auto c: s) {
            if (c == ')') level--;
            if (level) {
                ret += c;
            }
            if (c == '(') level++;
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().removeOuterParentheses("(()())(())(()(()))");
    cout << ans << endl;
    return 0;
}