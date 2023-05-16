/**
 * Author: Deean
 * Date: 2023-05-15 23:38
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stack;
        for (auto c: s) {
            if (!stack.empty() && stack.top() == '(' && c == ')') {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.size();
    }
};

int main() {
    auto ans = Solution().minAddToMakeValid("(((");
    cout << toString(ans) << endl;
    return 0;
}
