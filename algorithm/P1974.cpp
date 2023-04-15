/**
 * Author: Deean
 * Date: 2023-04-15 19:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int cnt = 0, pre = 0;
        for (char c: word) {
            int cur = c - 'a';
            cnt += 1 + min(abs(cur - pre), 26 - abs(cur - pre));
            pre = cur;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().minTimeToType("bza");
    cout << toString(ans) << endl;
    return 0;
}
