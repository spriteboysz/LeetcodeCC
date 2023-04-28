/**
 * Author: Deean
 * Date: 2023-04-28 21:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, char> hash1, hash2;
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (hash1.count(s[i]) && hash1[s[i]] != t[i]) {
                return false;
            }
            if (hash2.count(t[i]) && hash2[t[i]] != s[i]) {
                return false;
            }
            hash1[s[i]] = t[i];
            hash2[t[i]] = s[i];
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isIsomorphic("egg", "add");
    cout << toString(ans) << endl;
    return 0;
}
