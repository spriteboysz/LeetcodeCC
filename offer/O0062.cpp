/**
 * Author: Deean
 * Date: 2023-05-16 23:07
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int lastRemaining(int n, int m) {
        int last = 0;
        for (int i = 2; i <= n; ++i) {
            last = (m + last) % i;
        }
        return last;
    }
};

int main() {
    auto ans = Solution().lastRemaining(10, 17);
    cout << toString(ans) << endl;
    return 0;
}
