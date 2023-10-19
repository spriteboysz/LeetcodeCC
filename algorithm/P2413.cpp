/**
 * Author: Deean
 * Date: 2022-10-10 23:50
 * FileName: algorithm/P2413.cpp
 * Description: 2413. 最小偶倍数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n * 2;
    }
};

int main() {
    auto ans = Solution().smallestEvenMultiple(6);
    cout << toString(ans) << endl;
    return 0;
}