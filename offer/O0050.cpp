/**
 * Author: Deean
 * Date: 2023-04-29 14:40
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> hash(26, 0);
        for (char c: s) {
            hash[c - 'a']++;
        }
        for (auto c: s) {
            if (hash[c - 'a'] == 1) {
                return c;
            }
        }
        return ' ';
    }
};

int main() {
    auto ans = Solution().firstUniqChar("abaccdeff");
    cout << toString(ans) << endl;
    return 0;
}
