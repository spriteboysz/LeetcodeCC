/**
 * Author: Deean
 * Date: 2023-04-16 15:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i = 0, n = s.size(); i <= n; ++i) {
            if (s[i] == ' ' || s[i] == '\0') k--;
            if (k == 0) {
                return s.substr(0, i);
            }
        }
        return s;
    }
};

int main() {
    auto ans = Solution().truncateSentence("Hello how are you Contestant", 4);
    cout << toString(ans) << endl;
    return 0;
}
