/**
 * Author: Deean
 * Date: 2023-04-14 21:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        if (n < 8) return false;
        string special = "!@#$%^&*()-+";
        bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
        for (int i = 0; i < n; ++i) {
            char c = password[i];
            if (i != 0 && password[i - 1] == c) {
                return false;
            }
            if (c >= 'a' && c <= 'z') flag1 = true;
            if (c >= 'A' && c <= 'Z') flag2 = true;
            if (c >= '0' && c <= '9') flag3 = true;
            if (special.find(c) != -1) flag4 = true;
        }
        return flag1 && flag2 && flag3 && flag4;
    }
};

int main() {
    auto ans = Solution().strongPasswordCheckerII("IloveLe3tcode!");
    cout << toString(ans) << endl;
    return 0;
}
