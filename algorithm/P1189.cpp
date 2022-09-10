/**
 * Author: Deean
 * Date: 2022-09-10 14:48
 * FileName: algorithm/P1189.cpp
 * Description: 1189. “气球” 的最大数量
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> alphabet(26, 0);
        for (auto c: text) alphabet[c - 'a']++;
        int b = alphabet['b' - 'a'];
        int a = alphabet['a' - 'a'];
        int l = alphabet['l' - 'a'] / 2;
        int o = alphabet['o' - 'a'] / 2;
        int n = alphabet['n' - 'a'];
        int cnt = text.size();
        for (auto num: {b, a, l, o, n}) {
            cnt = min(cnt, num);
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().maxNumberOfBalloons("loonbalxballpoon");
    cout << toString(ans) << endl;
    return 0;
}