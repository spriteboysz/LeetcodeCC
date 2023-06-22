/**
 * Author: Deean
 * Date: 2023-06-22 22:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        return (mainTank + min((mainTank - 1) / 4, additionalTank)) * 10;
    }
};

int main() {
    auto ans = Solution().distanceTraveled(5, 10);
    cout << toString(ans) << endl;
    return 0;
}
