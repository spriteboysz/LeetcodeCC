/**
 * Author: Deean
 * Date: 2023-04-15 19:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string ss = "";
        for (char c: s) {
            int n = ss.size();
            if (ss.size() < 2) {
                ss.append(1, c);
            } else if (ss[n - 1] == ss[n - 2] && ss[n - 1] == c) {
                continue;
            } else {
                ss.append(1, c);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().makeFancyString("aaabaaaa");
    cout << toString(ans) << endl;
    return 0;
}
