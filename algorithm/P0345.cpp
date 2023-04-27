/**
 * Author: Deean
 * Date: 2023-04-27 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        string vowel = "";
        for (auto c: s) {
            if (vowels.count(c) > 0) {
                vowel.push_back(c);
            }
        }
        string ss = "";
        for (int i = 0, n = s.size(), j = vowel.size() - 1; i < n; ++i) {
            if (vowels.count(s[i])) {
                ss.push_back(vowel[j--]);
            } else {
                ss.push_back(s[i]);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().reverseVowels("leetcode");
    cout << toString(ans) << endl;
    return 0;
}
