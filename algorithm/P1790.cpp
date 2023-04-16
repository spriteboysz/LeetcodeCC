/**
 * Author: Deean
 * Date: 2023-04-16 16:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff;
        for (int i = 0, n = s1.size(); i < n; ++i) {
            if (s1[i] != s2[i]) {
                if (diff.size() >= 2) return false;
                diff.emplace_back(i);
            }
        }
        if (diff.size() == 0) return true;
        if (diff.size() == 1) return false;
        return s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]];
    }
};

int main() {
    auto ans = Solution().areAlmostEqual("bank", "kanb");
    cout << toString(ans) << endl;
    return 0;
}
