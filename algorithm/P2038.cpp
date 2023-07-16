/**
 * Author: Deean
 * Date: 2023-07-16 13:23
 * FileName: algorithm
 * Description:2038. 如果相邻两个颜色均相同则删除当前颜色
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        int cnt = 0;
        for (int i = 0, n = colors.size(); i < n - 2; ++i) {
            string sub = colors.substr(i, 3);
            if (sub == "AAA") cnt++;
            if (sub == "BBB") cnt--;
        }
        return cnt > 0;
    }
};

int main() {
    auto ans = Solution().winnerOfGame("AAABBB");
    cout << toString(ans) << endl;
    return 0;
}
