/**
 * Author: Deean
 * Date: 2023-04-30 16:40
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        vector<int> hash(26, 0);
        for (auto c: s1) {
            hash[c - 'a']++;
        }
        for (auto c: s2) {
            hash[c - 'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (hash[i] > 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().CheckPermutation("abc", "bca");
    cout << toString(ans) << endl;
    return 0;
}
