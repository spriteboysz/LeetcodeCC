/**
 * Author: Deean
 * Date: 2022-09-07 23:50
 * FileName: algorithm/P2390.cpp
 * Description: 2390. 从字符串中移除星号
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string stack;
        for (auto c: s) {
            if (c == '*' && !stack.empty()) {
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack;
    }
};

int main() {
    auto ans = Solution().removeStars("leet**cod*e");
    cout << toString(ans) << endl;
    return 0;
}