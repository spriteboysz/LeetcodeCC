/**
 * Author: Deean
 * Date: 2023-10-11 22:34
 * FileName: LCP
 * Description: LCR 032. 有效的字母异位词
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t) return false;
        vector<int> hash(26, 0);
        for (auto c: s) {
            hash[c - 'a']++;
        }
        for (auto c: t) {
            hash[c - 'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (hash[i] != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isAnagram("anagram", "nagaram");
    cout << toString(ans) << endl;
    return 0;
}