/**
 * Author: Deean
 * Date: 2023-10-11 23:02
 * FileName: LCP
 * Description: LCR 036. 逆波兰表达式求值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int evalRPN(vector <string> &tokens) {
        stack<int> stack;
        for (const auto &token: tokens) {
            if (token.size() > 1 || token[0] - '0' >= 0 && token[0] - '0' <= 9) {
                stack.push(stoi(token, 0, 10));
            } else {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                if (token == "+") {
                    stack.push(a + b);
                } else if (token == "-") {
                    stack.push(b - a);
                } else if (token == "*") {
                    stack.push(a * b);
                } else if (token == "/") {
                    stack.push(b / a);
                }
            }
        }
        return stack.top();
    }
};

int main() {
    vector <string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    auto ans = Solution().evalRPN(tokens);
    cout << toString(ans) << endl;
    return 0;
}