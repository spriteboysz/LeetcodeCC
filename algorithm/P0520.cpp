/**
 * Author: Deean
 * Date: 2023-04-23 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() >= 2 && islower(word[0]) && isupper(word[1])) {
            return false;
        }
        for (int i = 2; i < word.size(); ++i) {
            if (islower(word[i]) ^ islower(word[1])) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().detectCapitalUse("USA");
    cout << toString(ans) << endl;
    return 0;
}
