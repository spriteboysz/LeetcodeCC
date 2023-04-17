/**
 * Author: Deean
 * Date: 2023-04-16 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string modifyString(string s) {
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (s[i] == '?') {
                for (char c = 'a'; c <= 'z'; ++c) {
                    if ((i > 0 && s[i - 1] == c) || (i < n - 1 && s[i + 1] == c)) {
                        continue;
                    }
                    s[i] = c;
                    break;
                }
            }
        }
        return s;
    }
};

int main() {
    auto ans = Solution().modifyString("?zs");
    cout << toString(ans) << endl;
    return 0;
}
