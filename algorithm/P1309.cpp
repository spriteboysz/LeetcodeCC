/**
 * Author: Deean
 * Date: 2022-09-09 22:58
 * FileName: algorithm/P1309.cpp
 * Description: 1309. 解码字母到整数映射
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        string ss = "";
        for (int i = 0; i < s.size(); ++i) {
            if (i + 2 < s.size() && s[i + 2] == '#') {
                ss += char((s[i] - '0') * 10 + s[i + 1] - '1' + 'a');
                i += 2;
            } else {
                ss += char(s[i] - '1' + 'a');
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().freqAlphabets("1326#");
    cout << toString(ans) << endl;
    return 0;
}