/**
 * Author: Deean
 * Date: 2022-09-05 23:39
 * FileName: algorithm/P2124.cpp
 * Description: 2124. 检查是否所有 A 都在 B 之前
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        return s.find("ba") == string::npos;
    }
};

int main() {
    auto ans = Solution().checkString("abab");
    cout << toString(ans) << endl;
    return 0;
}