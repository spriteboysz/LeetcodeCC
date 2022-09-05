/**
 * Author: Deean
 * Date: 2022-09-05 23:15
 * FileName: algorithm/P1925.cpp
 * Description: 1925. 统计平方和三元组的数目
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for (int a = 1; a <= n; ++a) {
            for (int b = 1; b <= n; ++b) {
                for (int c = 1; c <= n; ++c) {
                    if (a * a + b * b == c * c) cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countTriples(10);
    cout << toString(ans) << endl;
    return 0;
}