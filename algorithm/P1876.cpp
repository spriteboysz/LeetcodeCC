/**
 * Author: Deean
 * Date: 2023-04-16 15:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0, n = s.size();
        for (int i = 0; i + 3 - 1 < n; ++i) {
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countGoodSubstrings("xyzzaz");
    cout << toString(ans) << endl;
    return 0;
}
