/**
 * Author: Deean
 * Date: 2023-04-13 23:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int cnt = 0;
        string ss = to_string(num);
        for (int i = 0, n = ss.size(); i + k <= n; ++i) {
            int div = 0, j = 0;
            while (j < k) {
                div = div * 10 + ss[i + j] - '0';
                j++;
            }
            if (div != 0 && num % div == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().divisorSubstrings(430043, 2);
    cout << toString(ans) << endl;
    return 0;
}
