/**
 * Author: Deean
 * Date: 2023-04-28 21:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ss;
        while (columnNumber > 0) {
            int a0 = (columnNumber - 1) % 26 + 1;
            ss += a0 - 1 + 'A';
            columnNumber = (columnNumber - a0) / 26;
        }
        reverse(ss.begin(), ss.end());
        return ss;
    }
};

int main() {
    auto ans = Solution().convertToTitle(28);
    cout << toString(ans) << endl;
    return 0;
}
