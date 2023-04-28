/**
 * Author: Deean
 * Date: 2023-04-27 23:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n < 0) return false;
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;
        return n == 1;
    }
};

int main() {
    auto ans = Solution().isUgly(6);
    cout << toString(ans) << endl;
    return 0;
}
