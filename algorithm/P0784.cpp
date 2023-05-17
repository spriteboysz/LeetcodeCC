/**
 * Author: Deean
 * Date: 2023-05-17 22:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void backtrace(string &s, int pos, vector <string> &paths) {
        while (pos < s.size() && isdigit(s[pos])) {
            pos++;
        }
        if (pos == s.size()) {
            paths.push_back(s);
            return;
        }
        s[pos] = ::tolower(s[pos]);
        backtrace(s, pos + 1, paths);
        s[pos] = ::toupper(s[pos]);
        backtrace(s, pos + 1, paths);
    }

    vector <string> letterCasePermutation(string s) {
        vector <string> paths;
        backtrace(s, 0, paths);
        return paths;
    }
};

int main() {
    auto ans = Solution().letterCasePermutation("a1b2");
    cout << toString(ans) << endl;
    return 0;
}
