/**
 * Author: Deean
 * Date: 2023-04-16 15:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool findRotation(vector <vector<int>> &mat, vector <vector<int>> &target) {
        for (int k = 0; k < 4; ++k) {
            for (int i = 0, n = mat.size(); i < n / 2; ++i) {
                for (int j = 0; j < (n + 1) / 2; ++j) {
                    int temp = mat[i][j];
                    mat[i][j] = mat[n - 1 - j][i];
                    mat[n - 1 - j][i] = mat[n - 1 - i][n - 1 - j];
                    mat[n - 1 - i][n - 1 - j] = mat[j][n - 1 - i];
                    mat[j][n - 1 - i] = temp;
                }
            }
            if (mat == target) return true;
        }
        return false;
    }
};

int main() {
    vector <vector<int>> mat = stringToVector2("[[0,0,0],[0,1,0],[1,1,1]]");
    vector <vector<int>> target = stringToVector2("[[1,1,1],[0,1,0],[0,0,0]]");
    auto ans = Solution().findRotation(mat, target);
    cout << toString(ans) << endl;
    return 0;
}
