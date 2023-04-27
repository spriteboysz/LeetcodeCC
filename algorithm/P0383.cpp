/**
 * Author: Deean
 * Date: 2023-04-26 23:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> hash(26, 0);
        for (char c: ransomNote) {
            hash[c - 'a']--;
        }
        for (char c: magazine) {
            hash[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (hash[i] < 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().canConstruct("aa", "aab");
    cout << toString(ans) << endl;
    return 0;
}
