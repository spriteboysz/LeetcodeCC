/**
 * Author: Deean
 * Date: 2023-04-11 23:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        for (int i = 0; i < n; ++i) {
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1]) {
                return false;
            }
        }
        return sentence[0] == sentence[n - 1];
    }
};

int main() {
    auto ans = Solution().isCircularSentence("leetcode exercises sound delightful");
    cout << toString(ans) << endl;
    return 0;
}
