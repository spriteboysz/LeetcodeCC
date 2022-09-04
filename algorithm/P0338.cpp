/**
 * Author: Deean
 * Date: 2022-09-04 15:07
 * FileName: algorithm/P0338.cpp
 * Description: 338. 比特位计数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for (int i = 0; i <= n; ++i) {
            int cur = i, cnt = 0;
            while (cur) {
                cnt += cur & 1;
                cur >>= 1;
            }
            bits.push_back(cnt);
        }
        return bits;
    }
};

int main() {
    auto ans = Solution().countBits(5);
    cout << vectorToString(ans) << endl;
    return 0;
}