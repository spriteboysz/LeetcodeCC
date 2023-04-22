/**
 * Author: Deean
 * Date: 2023-04-22 15:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> letters;
        for (char c: s) {
            if (islower(c) || isupper(c)) {
                letters.push_back(c);
            }
        }
        reverse(letters.begin(), letters.end());
        for (int i = 0, j = 0, n = s.size(); i < n; ++i) {
            if (islower(s[i]) || isupper(s[i])) {
                s[i] = letters[j++];
            }
        }
        return s;
    }
};

int main() {
    auto ans = Solution().reverseOnlyLetters("Test1ng-Leet=code-Q!");
    cout << toString(ans) << endl;
    return 0;
}
