/**
 * Author: Deean
 * Date: 2023-04-22 19:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.size() == goal.size() && (s + s).find(goal) != string::npos;
    }
};

int main() {
    auto ans = Solution().rotateString("abcde", "cdeab");
    cout << toString(ans) << endl;
    return 0;
}
