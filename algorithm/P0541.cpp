/**
 * Author: Deean
 * Date: 2023-04-24 22:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0, n = s.size(); i < n; i += 2 * k) {
            reverse(s.begin() + i, s.begin() + min(i + k, n));
        }
        return s;
    }
};

int main() {
    auto ans = Solution().reverseStr("abcdefg", 2);
    cout << toString(ans) << endl;
    return 0;
}
