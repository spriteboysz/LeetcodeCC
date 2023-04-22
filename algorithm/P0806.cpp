/**
 * Author: Deean
 * Date: 2023-04-22 19:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int> &widths, string s) {
        int lines = 1, width = 0;
        for (auto c: s) {
            int need = widths[c - 'a'];
            width += need;
            if (width > 100) {
                lines++;
                width = need;
            }
        }
        return {lines, width};
    }
};

int main() {
    vector<int> widths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                          10, 10, 10};
    auto ans = Solution().numberOfLines(widths, "abcdefghijklmnopqrstuvwxyz");
    cout << toString(ans) << endl;
    return 0;
}
