/**
 * Author: Deean
 * Date: 2023-04-28 21:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        for (int i = columnTitle.size() - 1, mul = 1; i >= 0; --i) {
            int k = columnTitle[i] - 'A' + 1;
            number += k * mul;
            mul *= 26;
        }
        return number;
    }
};

int main() {
    auto ans = Solution().titleToNumber("AB");
    cout << toString(ans) << endl;
    return 0;
}
