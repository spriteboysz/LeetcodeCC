/**
 * Author: Deean
 * Date: 2022-09-04 20:27
 * FileName: algorithm/P0709.cpp
 * Description: 709. 转换成小写字母
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 'a' - 'A';
            }
        }
        return s;
    }
};

int main() {
    auto ans = Solution().toLowerCase("LOVELY");
    cout << ans << endl;
    return 0;
}