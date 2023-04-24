/**
 * Author: Deean
 * Date: 2023-04-24 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0, j = 0, n = s.size(); j <= n; ++j) {
            if (s[j] == ' ' || j == n) {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        return s;
    }
};

int main() {
    auto ans = Solution().reverseWords("Let's take LeetCode contest");
    cout << toString(ans) << endl;
    return 0;
}
