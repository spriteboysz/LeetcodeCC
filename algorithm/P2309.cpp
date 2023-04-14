/**
 * Author: Deean
 * Date: 2023-04-14 21:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        int hash[26] = {0};
        for (auto &c: s) {
            if (c >= 'a' && c <= 'z') {
                hash[c - 'a'] |= 1;
            } else {
                hash[c - 'A'] |= 2;
            }
        }
        for (int i = 25; i >= 0; --i) {
            if (hash[i] == 3) {
                return string(1, i + 'A');
            }
        }
        return "";
    }
};

int main() {
    auto ans = Solution().greatestLetter("arRAzFif");
    cout << toString(ans) << endl;
    return 0;
}
