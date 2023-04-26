/**
 * Author: Deean
 * Date: 2023-04-26 22:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> hash(52, 0);
        for (char c: s) {
            if (islower(c)) hash[c - 'a']++;
            if (isupper(c)) hash[c - 'A' + 26]++;
        }
        int odd = 0, cnt = 0;
        for (int i = 0; i < 52; ++i) {
            if (hash[i] % 2 == 1) odd = 1;
            cnt += hash[i] / 2 * 2;
        }
        return cnt + odd;
    }
};

int main() {
    auto ans = Solution().longestPalindrome("aaaAaaaa");
    cout << toString(ans) << endl;
    return 0;
}
