/**
 * Author: Deean
 * Date: 2023-04-27 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> words;
        for (int i = 0, j = 0, n = s.size(); j <= n; ++j) {
            if (s[j] == ' ' || j == n) {
                words.push_back(s.substr(i, j - i));
                i = j + 1;
            }
        }
        // cout << toString(words) << endl;
        if (words.size() != pattern.size()) return false;
        unordered_map<char, string> c2s;
        unordered_map<string, char> s2c;
        for (int i = 0, n = pattern.size(); i < n; ++i) {
            if (c2s.count(pattern[i]) && c2s[pattern[i]] != words[i]) {
                return false;
            }
            if (s2c.count(words[i]) && s2c[words[i]] != pattern[i]) {
                return false;
            }
            c2s[pattern[i]] = words[i];
            s2c[words[i]] = pattern[i];
        }
        return true;
    }
};

int main() {
    auto ans = Solution().wordPattern("abba", "dog cat cat dog");
    cout << toString(ans) << endl;
    return 0;
}
