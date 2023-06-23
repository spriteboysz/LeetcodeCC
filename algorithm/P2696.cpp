/**
 * Author: Deean
 * Date: 2023-06-23 18:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minLength(string s) {
        stack<char> stack;
        for (auto c: s) {
            if (stack.size() == 0) {
                stack.push(c);
            } else if (stack.top() == 'A' && c == 'B') {
                stack.pop();
            } else if (stack.top() == 'C' && c == 'D') {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.size();
    }
};

int main() {
    auto ans = Solution().minLength("ABFCACDB");
    cout << toString(ans) << endl;
    return 0;
}
