/**
 * Author: Deean
 * Date: 2023-04-26 22:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int cnt = 0;
        for (int i = 0, n = s.size(); i < n; ++i) {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ') {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countSegments("Hello, my name is John");
    cout << toString(ans) << endl;
    return 0;
}
