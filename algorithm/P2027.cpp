/**
 * Author: Deean
 * Date: 2023-04-15 16:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int cnt = 0, covered = -1;
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (s[i] == 'X' && i > covered){
                cnt++;
                covered = i + 2;
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().minimumMoves("XXOX");
    cout << toString(ans) << endl;
    return 0;
}
