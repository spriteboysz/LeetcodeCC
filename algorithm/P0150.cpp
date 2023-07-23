/**
 * Author: Deean
 * Date: 2023-07-23 21:57
 * FileName: algorithm
 * Description:150. 逆波兰表达式求值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int evalRPN(vector <string> &tokens) {
        vector<int> stack;
        for (auto token: tokens) {
            if (token.size() > 1 || token[0] >= '0' && token[0] <= '9') {
                stack.push_back(stoi(token));
            } else {
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                if (token == "+") {
                    stack.push_back(a + b);
                } else if (token == "-") {
                    stack.push_back(b - a);
                } else if (token == "*") {
                    stack.push_back(a * b);
                } else if (token == "/") {
                    stack.push_back(b / a);
                }
            }
        }
        return stack[0];
    }
};

int main() {
    vector <string> tokens = {"4", "13", "5", "/", "+"};
    auto ans = Solution().evalRPN(tokens);
    cout << toString(ans) << endl;
    return 0;
}
