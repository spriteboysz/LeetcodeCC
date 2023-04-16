/**
 * Author: Deean
 * Date: 2023-04-16 15:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkZeroOnes(string s) {
        int max0 = 0, max1 = 0, cur0 = 0, cur1 = 0;
        for (char c: s) {
            if (c == '0') {
                cur0++;
                cur1 = 0;
            } else {
                cur1++;
                cur0 = 0;
            }
            max0 = max(max0, cur0);
            max1 = max(max1, cur1);
        }
        return max1 > max0;
    }
};

int main() {
    auto ans = Solution().checkZeroOnes("1101");
    cout << toString(ans) << endl;
    return 0;
}
