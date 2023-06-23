/**
 * Author: Deean
 * Date: 2023-06-22 23:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        int m = 0, n = num.size();
        for (int i = n - 1; i >= 0; --i) {
            if (num[i] != '0') {
                m = i + 1;
                break;
            }
        }
        return num.substr(0, m);
    }
};

int main() {
    auto ans = Solution().removeTrailingZeros("51230100");
    cout << toString(ans) << endl;
    return 0;
}
