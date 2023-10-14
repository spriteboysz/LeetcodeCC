/**
 * Author: Deean
 * Date: 2023-10-14 13:57
 * FileName: LCP
 * Description: LCR 166. 珠宝的最高价值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int jewelleryValue(vector <vector<int>> &frame) {
        int m = frame.size(), n = frame[0].size();
        if (m == 0 || n == 0) return -1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j == 0) {

                } else if (i == 0) {
                    frame[i][j] += frame[i][j - 1];
                } else if (j == 0) {
                    frame[i][j] += frame[i - 1][j];
                } else {
                    frame[i][j] += max(frame[i][j - 1], frame[i - 1][j]);
                }
            }
        }
        return frame[m - 1][n - 1];
    }
};

int main() {
    auto frame = stringToVector2("[[1,3,1],[1,5,1],[4,2,1]]");
    auto ans = Solution().jewelleryValue(frame);
    cout << toString(ans) << endl;
    return 0;
}