/**
 * Author: Deean
 * Date: 2022-09-04 20:31
 * FileName: algorithm/P1704.cpp
 * Description: 1704. 判断字符串的两半是否相似
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowel = "aeiouAEIOU";
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < s.size() / 2; ++i) {
            if (count(vowel.begin(), vowel.end(), s[i])) cnt1++;
        }
        for (int i = s.size() / 2; i < s.size(); ++i) {
            if (count(vowel.begin(), vowel.end(), s[i])) cnt2++;
        }
        return cnt1 == cnt2;
    }
};

int main() {
    auto ans = Solution().halvesAreAlike("book");
    cout << ans << endl;
    return 0;
}