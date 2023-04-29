/**
 * Author: Deean
 * Date: 2023-04-29 11:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0, i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while (i >= 0 && s[i--] != ' ') {
            n++;
        }
        return n;
    }
};

int main() {
    auto ans = Solution().lengthOfLastWord("   fly me   to   the moon  ");
    cout << toString(ans) << endl;
    return 0;
}
