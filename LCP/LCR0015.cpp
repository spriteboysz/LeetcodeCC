/**
 * Author: Deean
 * Date: 2023-10-11 20:54
 * FileName: LCP
 * Description: LCR 015. 找到字符串中所有字母异位词
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if (m > n) return {};
        vector<int> hash(26, 0), hash1(26, 0), anagram;
        for (int i = 0; i < m; ++i) {
            hash[p[i] - 'a']++;
            hash1[s[i] - 'a']++;
        }
        if (hash == hash1) anagram.push_back(0);
        for (int i = m; i < n; ++i) {
            hash1[s[i] - 'a']++;
            hash1[s[i - m] - 'a']--;
            if (hash == hash1) {
                anagram.push_back(i - m + 1);
            }
        }
        return anagram;
    }
};

int main() {
    auto ans = Solution().findAnagrams("cbaebabacd", "abc");
    cout << toString(ans) << endl;
    return 0;
}