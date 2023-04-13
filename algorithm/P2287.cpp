/**
 * Author: Deean
 * Date: 2023-04-13 23:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int alphabet[26] = {0}, hash[26] = {0};
        for (const auto &c: s) {
            alphabet[c - 'a']++;
        }
        for (const auto &c: target) {
            hash[c - 'a']++;
        }
        int cnt = s.size();
        for (int i = 0; i < 26; ++i) {
            if (hash[i] != 0) {
                cnt = min(cnt, alphabet[i] / hash[i]);
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().rearrangeCharacters("ilovecodingonleetcode", "code");
    cout << toString(ans) << endl;
    return 0;
}
