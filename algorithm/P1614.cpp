/**
 * Author: Deean
 * Date: 2023-04-17 22:54
 * FileName: 
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int maximum = 0, depth = 0;
        for (char c: s) {
            if (c == '(') depth++;
            maximum = max(maximum, depth);
            if (c == ')') depth--;
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxDepth("(1+(2*3)+((8)/4))+1");
    cout << toString(ans) << endl;
    return 0;
}
