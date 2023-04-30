/**
 * Author: Deean
 * Date: 2023-04-30 17:07
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        return s1.size() == s2.size() && (s1 + s1).find(s2) != string::npos;
    }
};

int main() {
    auto ans = Solution().isFlipedString("waterbottle", "erbottlewat");
    cout << toString(ans) << endl;
    return 0;
}
