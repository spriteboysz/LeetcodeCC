/**
 * Author: Deean
 * Date: 2023-04-22 16:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        int last = -1, maximum = 0;
        for (int i = 0; n; ++i) {
            if (n & 1) {
                if (last != -1) {
                    maximum = max(maximum, i - last);
                }
                last = i;
            }
            n >>= 1;
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().binaryGap(22);
    cout << toString(ans) << endl;
    return 0;
}
