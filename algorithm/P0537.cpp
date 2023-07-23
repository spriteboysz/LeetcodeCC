/**
 * Author: Deean
 * Date: 2023-07-23 14:23
 * FileName: algorithm
 * Description:537. 复数乘法
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a1, b1, a2, b2;
        sscanf(num1.c_str(), "%d+%di", &a1, &b1);
        sscanf(num2.c_str(), "%d+%di", &a2, &b2);
        char ans[20];
        sprintf(ans, "%d+%di", a1 * a2 - b1 * b2, a1 * b2 + b1 * a2);
        return ans;
    }
};

int main() {
    auto ans = Solution().complexNumberMultiply("1+-1i", "1+-1i");
    cout << toString(ans) << endl;
    return 0;
}
