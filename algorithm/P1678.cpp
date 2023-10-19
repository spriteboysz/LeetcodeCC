/**
 * Author: Deean
 * Date: 2022-09-03 22:37
 * FileName: algorithm/P1678.cpp
 * Description: 1678. 设计 Goal 解析器
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ret = "";
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    ret += 'o';
                    i++;
                } else if (command[i + 1] == 'a') {
                    ret += "al";
                    i += 3;
                }
            } else {
                ret += command[i];
            }
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().interpret("G()()()()(al)");
    cout << ans << endl;
    ans = Solution().interpret("(al)G(al)()()G");
    cout << ans << endl;
    return 0;
}