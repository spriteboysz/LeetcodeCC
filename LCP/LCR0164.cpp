/**
 * Author: Deean
 * Date: 2023-10-14 13:54
 * FileName: LCP
 * Description: LCR 164. 破解闯关密码
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string crackPassword(vector<int> &password) {
        sort(password.begin(), password.end(), [&](const int a, const int b) {
            return to_string(a) + to_string(b) < to_string(b) + to_string(a);
        });
        string ret = "";
        for (auto num: password) {
            ret += to_string(num);
        }
        return ret;
    }
};

int main() {
    vector<int> password = {0, 3, 30, 34, 5, 9};
    auto ans = Solution().crackPassword(password);
    cout << toString(ans) << endl;
    return 0;
}