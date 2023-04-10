/**
 * Author: Deean
 * Date: 2023-04-10 23:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int cnt = 0, n = num;
        while (n > 0) {
            if (num % (n % 10) == 0) {
                cnt++;
            }
            n /= 10;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countDigits(121);
    cout << toString(ans) << endl;
    return 0;
}
