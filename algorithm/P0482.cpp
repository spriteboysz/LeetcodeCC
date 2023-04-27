/**
 * Author: Deean
 * Date: 2023-04-26 22:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ss = "";
        for (int i = s.size() - 1, cnt = 0; i >= 0; --i) {
            if (isalpha(s[i])) {
                ss.append(1, toupper(s[i]));
                cnt++;
            } else if (isdigit(s[i])) {
                ss.append(1, s[i]);
                cnt++;
            }
            if (cnt == k && i != 0) {
                ss.append(1, '-');
                cnt = 0;
            }
        }
        if (ss.size() > 0 && ss.back() == '-') {
            ss.pop_back();
        }
        reverse(ss.begin(), ss.end());
        return ss;
    }
};

int main() {
    auto ans = Solution().licenseKeyFormatting("5F3Z-2e-9-w", 4);
    cout << toString(ans) << endl;
    return 0;
}
