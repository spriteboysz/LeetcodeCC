/**
 * Author: Deean
 * Date: 2023-04-22 14:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minDeletionSize(vector <string> &strs) {
        int cnt = 0;
        for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i - 1][j] > strs[i][j]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> strs = {"cba", "daf", "ghi"};
    auto ans = Solution().minDeletionSize(strs);
    cout << toString(ans) << endl;
    return 0;
}
