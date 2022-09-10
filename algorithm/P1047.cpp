/**
 * Author: Deean
 * Date: 2022-09-10 14:01
 * FileName: algorithm/P1047.cpp
 * Description: 1047. 删除字符串中的所有相邻重复项
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ss = "";
        for (char c: s) {
            if (!ss.empty() && ss.back() == c) {
                ss.pop_back();
            } else {
                ss.push_back(c);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().removeDuplicates("abbaca");
    cout << toString(ans) << endl;
    return 0;
}