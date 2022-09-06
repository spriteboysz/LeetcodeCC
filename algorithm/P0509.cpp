/**
 * Author: Deean
 * Date: 2022-09-06 23:59
 * FileName: algorithm/P0509.cpp
 * Description: 509. 斐波那契数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int a = 0, b = 1;
        for (int i = 2; i <= n; ++i) {
            int temp = a;
            a = b;
            b = temp + a;
        }
        return b;
    }
};

int main() {
    auto ans = Solution().fib(4);
    cout << toString(ans) << endl;
    return 0;
}