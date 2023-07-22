/**
 * Author: Deean
 * Date: 2023-07-22 22:37
 * FileName: algorithm
 * Description:1003. 检查替换后的词是否有效
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (auto c: s) {
            if (stack.size() < 2) {
                stack.push_back(c);
            } else if (c == 'c' && stack[stack.size() - 1] == 'b' && stack[stack.size() - 2] == 'a') {
                stack.pop_back();
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack.size() == 0;
    }
};

int main() {
    auto ans = Solution().isValid("abcabcababcc");
    cout << toString(ans) << endl;
    return 0;
}
