/**
 * Author: Deean
 * Date: 2023-04-30 16:43
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string replaceSpaces(string S, int length) {
        string ss = "";
        for (int i = 0; i < length; ++i) {
            if (S[i] == ' ') {
                ss.append("%20");
            } else {
                ss.append(1, S[i]);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().replaceSpaces("Mr John Smith    ", 13);
    cout << toString(ans) << endl;
    return 0;
}
