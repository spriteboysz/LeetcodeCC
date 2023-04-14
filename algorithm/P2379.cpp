/**
 * Author: Deean
 * Date: 2023-04-14 22:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt = 0, left = 0, right = 0;
        while (right < k) {
            cnt += blocks[right] == 'W' ? 1 : 0;
            right++;
        }
        int res = cnt;
        while (right < blocks.size()) {
            cnt += blocks[right] == 'W' ? 1 : 0;
            cnt -= blocks[left] == 'W' ? 1 : 0;
            res = min(res, cnt);
            left++;
            right++;
        }
        return res;
    }
};

int main() {
    auto ans = Solution().minimumRecolors("WBBWWBBWBW", 7);
    cout << toString(ans) << endl;
    return 0;
}
