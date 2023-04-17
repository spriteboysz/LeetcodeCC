/**
 * Author: Deean
 * Date: 2023-04-16 22:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string thousandSeparator(int n) {
        string ss = to_string(n), res;
        for (int i = ss.size() - 1, cnt = 0; i >= 0; --i) {
            cnt++;
            if (cnt > 3) {
                res += '.';
                cnt = 1;
            }
            res += ss[i];
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    auto ans = Solution().thousandSeparator(123456789);
    cout << toString(ans) << endl;
    return 0;
}
