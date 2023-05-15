/**
 * Author: Deean
 * Date: 2023-05-14 19:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ss = "";
        int m = part.size();
        for (auto c: s) {
            ss.push_back(c);
            int n = ss.size();
            if (n >= m && ss.substr(n - m, n) == part) {
                ss = ss.substr(0, n - m);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().removeOccurrences("daabcbaabcbc", "abc");
    cout << toString(ans) << endl;
    return 0;
}
