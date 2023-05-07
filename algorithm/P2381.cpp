/**
 * Author: Deean
 * Date: 2023-05-07 17:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector <vector<int>> &shifts) {
        int n = s.size();
        vector<int> f(n + 1);
        for (auto &shift: shifts) {
            if (shift[2] == 1) {
                f[shift[0]]++, f[shift[1] + 1]--;
            } else {
                f[shift[0]]--, f[shift[1] + 1]++;
            }
        }
        string ret = "";
        for (int i = 0, delta = 0; i < n; ++i) {
            int c = s[i] - 'a';
            delta += f[i];
            c = ((c + delta) % 26 + 26) % 26;
            ret.push_back(c + 'a');
        }
        return ret;
    }
};

int main() {
    auto shifts = stringToVector2("[[0,1,0],[1,2,1],[0,2,1]]");
    auto ans = Solution().shiftingLetters("abc", shifts);
    cout << toString(ans) << endl;
    return 0;
}
