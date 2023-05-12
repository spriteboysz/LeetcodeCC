/**
 * Author: Deean
 * Date: 2023-05-12 23:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n) {
            if (n % 3 > 1) return false;
            n /= 3;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().checkPowersOfThree(91);
    cout << toString(ans) << endl;
    ans = Solution().checkPowersOfThree(21);
    cout << toString(ans) << endl;
    return 0;
}
