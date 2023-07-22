/**
 * Author: Deean
 * Date: 2023-07-21 22:14
 * FileName: algorithm
 * Description:1347. 制造字母异位词的最小步骤数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> alphabet(26, 0);
        for (char c: s) {
            alphabet[c - 'a']++;
        }
        for (char c: t) {
            alphabet[c - 'a']--;
        }
        int cnt = 0;
        for (int i = 0; i < 26; ++i) {
            cnt += abs(alphabet[i]);
        }
        return cnt / 2;
    }
};

int main() {
    auto ans = Solution().minSteps("leetcode", "practice");
    cout << toString(ans) << endl;
    return 0;
}
