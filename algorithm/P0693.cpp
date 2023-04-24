/**
 * Author: Deean
 * Date: 2023-04-23 21:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        long a = n ^ (n >> 1);
        return (a & (a + 1)) == 0;
    }
};

int main() {
    auto ans = Solution().hasAlternatingBits(5);
    cout << toString(ans) << endl;
    return 0;
}
