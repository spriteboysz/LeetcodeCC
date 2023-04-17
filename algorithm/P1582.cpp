/**
 * Author: Deean
 * Date: 2023-04-16 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numSpecial(vector <vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> rows(n), cols(m);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                rows[i] += mat[i][j];
                cols[j] += mat[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <vector<int>> mat = stringToVector2("[[1,0,0],[0,0,1],[1,0,0]]");
    auto ans = Solution().numSpecial(mat);
    cout << toString(ans) << endl;
    return 0;
}
