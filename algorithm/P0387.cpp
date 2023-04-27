/**
 * Author: Deean
 * Date: 2023-04-26 23:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hash;
        for (char c: s) {
            hash[c]++;
        }
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (hash[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    auto ans = Solution().firstUniqChar("loveleetcode");
    cout << toString(ans) << endl;
    return 0;
}
