/**
 * Author: Deean
 * Date: 2023-04-26 23:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos1 = 0, pos2 = 0, n1 = s.size(), n2 = t.size();
        if (n1 > n2) return false;
        while (pos1 < n1 && pos2 < n2) {
            if (s[pos1] == t[pos2]) {
                pos1++;
            }
            pos2++;
        }
        return pos1 == n1;
    }
};

int main() {
    auto ans = Solution().isSubsequence("abc", "ahbgdc");
    cout << toString(ans) << endl;
    return 0;
}
