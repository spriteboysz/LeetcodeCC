/**
 * Author: Deean
 * Date: 2023-04-23 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.size(), b.size());
    }
};

int main() {
    auto ans = Solution().findLUSlength("aaa", "bbb");
    cout << toString(ans) << endl;
    return 0;
}
