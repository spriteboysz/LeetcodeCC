/**
 * Author: Deean
 * Date: 2023-04-16 21:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int cnt = 0;
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (s[i] - '0' != i % 2) {
                cnt++;
            }
        }
        return min(cnt, (int)s.size() - cnt);
    }
};

int main() {
    auto ans = Solution().minOperations("0100");
    cout << toString(ans) << endl;
    return 0;
}
