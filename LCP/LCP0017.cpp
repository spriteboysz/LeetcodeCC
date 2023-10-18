/**
 * Author: Deean
 * Date: 2022-09-04 14:23
 * FileName: LCP/LCP0017.cpp
 * Description: LCP 17. 速算机器人
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        int x = 1, y = 0;
        for (auto c: s) {
            if (c == 'A') x = 2 * x + y;
            if (c == 'B') y = 2 * y + x;
        }
        return x + y;
    }
};

int main() {
    auto ans = Solution().calculate("AB");
    cout << ans << endl;
    return 0;
}