/**
 * Author: Deean
 * Date: 2022-09-07 23:40
 * FileName: algorithm/P0242.cpp
 * Description: 242. 有效的字母异位词
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        for (auto c: s) count[c - 'a']++;
        for (auto c: t) count[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (count[i] != 0) return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isAnagram("anagram", "nagaram");
    cout << toString(ans) << endl;
    return 0;
}