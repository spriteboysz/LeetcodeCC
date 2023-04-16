/**
 * Author: Deean
 * Date: 2023-04-16 14:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    auto ans = Solution().largestOddNumber("4206");
    cout << toString(ans) << endl;
    return 0;
}
