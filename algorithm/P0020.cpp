/**
 * Author: Deean
 * Date: 2023-04-28 22:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (auto c: s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
            } else {
                if (stack.empty()) return false;
                char peek = stack.top();
                stack.pop();
                if (c == ')' && peek != '(') return false;
                else if (c == ']' && peek != '[') return false;
                else if (c == '}' && peek != '{') return false;
            }
        }
        return stack.empty();
    }
};

int main() {
    auto ans = Solution().isValid("()[]{}");
    cout << toString(ans) << endl;
    return 0;
}
