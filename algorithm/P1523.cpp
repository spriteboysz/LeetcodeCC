/**
 * Author: Deean
 * Date: 2023-04-16 22:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int calc(int num) {
        return (num + 1) >> 1;
    }

    int countOdds(int low, int high) {
        return calc(high) - calc(low - 1);
    }
};

int main() {
    auto ans = Solution().countOdds(3, 7);
    cout << toString(ans) << endl;
    return 0;
}
