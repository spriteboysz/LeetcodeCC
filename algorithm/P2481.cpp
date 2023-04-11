/**
 * Author: Deean
 * Date: 2023-04-11 23:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numberOfCuts(int n) {
        if (n == 1) return 0;
        return n % 2 == 0 ? n / 2 : n;
    }
};

int main() {
    auto ans = Solution().numberOfCuts(4);
    cout << toString(ans) << endl;
    return 0;
}
