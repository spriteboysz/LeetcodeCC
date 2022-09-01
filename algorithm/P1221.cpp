/**
 * Author: Deean
 * Date: 2022-09-01 23:51
 * FileName: algorithm/P1221.cpp
 * Description: 1221. 分割平衡字符串
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, index = 0;
        for (char c : s) {
            if (c == 'L') index++;
            if (c == 'R') index--;
            if (index == 0) count++;
        }
        return count;
    }
};

int main() {
    auto ans = Solution().balancedStringSplit("RLRRRLLRLL");
    cout << ans << endl;
    return 0;
}