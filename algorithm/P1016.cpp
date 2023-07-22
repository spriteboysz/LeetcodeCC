/**
 * Author: Deean
 * Date: 2023-07-22 22:23
 * FileName: algorithm
 * Description:1016. 子串能表示从 1 到 N 数字的二进制串
 */

#include "..\common\leetcode.h"
#include <bitset>

using namespace std;

class Solution {
public:
    bool queryString(string s, int n) {
        if (n > 1000) return false;
        for (int i = 1; i <= n; i++) {
            auto bin = bitset<32>(i).to_string();
            bin = bin.substr(bin.find('1'));
            // cout << bin << endl;
            if (s.find(bin) == string::npos) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().queryString("0110", 3);
    cout << toString(ans) << endl;
    return 0;
}
