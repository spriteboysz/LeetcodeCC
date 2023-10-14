/**
 * Author: Deean
 * Date: 2023-10-13 22:39
 * FileName: LCP
 * Description: LCR 122. 路径加密
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string pathEncryption(string path) {
        string ss = "";
        for (const auto &c: path) {
            if (c == '.') {
                ss.push_back(' ');
            } else {
                ss.push_back(c);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().pathEncryption("a.aef.qerf.bb");
    cout << toString(ans) << endl;
    return 0;
}