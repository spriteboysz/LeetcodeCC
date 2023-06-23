/**
 * Author: Deean
 * Date: 2023-06-23 16:08
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        while (n) {
            n /= 5;
            cnt += n;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().trailingZeroes(5);
    cout << toString(ans) << endl;
    return 0;
}
