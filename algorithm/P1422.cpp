/**
 * Author: Deean
 * Date: 2023-04-18 22:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        if (s[0] == '0') score++;
        for (int i = 1, n = s.size(); i < n; ++i) {
            if (s[i] == '1') {
                score++;
            }
        }
        int maximum = score;
        for (int i = 1, n = s.size(); i < n - 1; ++i) {
            if (s[i] == '0') {
                score++;
            } else {
                score--;
            }
            maximum = max(maximum, score);
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxScore("011101");
    cout << toString(ans) << endl;
    return 0;
}
