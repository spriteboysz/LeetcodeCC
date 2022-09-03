/**
 * Author: Deean
 * Date: 2022-09-03 20:17
 * FileName: algorithm/P2278.cpp
 * Description: 2278. 字母在字符串中的百分比
 */

#include <iostream>
#include <vector>
#include <codec.h>

using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for (auto c: s) {
            if (c == letter) cnt++;
        }
        return cnt * 100 / s.size();
    }
};

int main() {
    auto ans = Solution().percentageLetter("foobar", 'o');
    cout << ans << endl;
    return 0;
}