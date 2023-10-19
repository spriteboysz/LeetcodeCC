/**
 * Author: Deean
 * Date: 2022-09-04 21:03
 * FileName: algorithm/P1323.cpp
 * Description: 1323. 6 和 9 组成的最大数字
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '6') {
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};

int main() {
    auto ans = Solution().maximum69Number(9669);
    cout << ans << endl;
    return 0;
}