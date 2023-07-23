/**
 * Author: Deean
 * Date: 2023-07-23 15:39
 * FileName: algorithm
 * Description:231. 2 的幂
 */

#include "..\common\leetcode.h"
#include <bitset>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        string ss = bitset<32>(n).to_string();
        int cnt1 = 0;
        for (auto c: ss) {
            if (c == '1') {
                cnt1++;
            }
        }
        return cnt1 == 1;
    }
};

int main() {
    auto ans = Solution().isPowerOfTwo(4);
    cout << toString(ans) << endl;
    return 0;
}
