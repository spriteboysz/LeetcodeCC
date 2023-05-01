/**
 * Author: Deean
 * Date: 2023-04-30 21:57
 * FileName: offer
 * Description: 
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
