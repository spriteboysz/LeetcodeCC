/**
 * Author: Deean
 * Date: 2023-04-10 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int flag = 1, sum = 0, cnt = 0;
        while (n > 0) {
            sum += (n % 10) * flag;
            flag *= -1;
            n /= 10;
            cnt++;
        }
        return cnt % 2 == 1 ? sum : -sum;
    }
};

int main() {
    auto ans = Solution().alternateDigitSum(521);
    cout << toString(ans) << endl;
    return 0;
}
