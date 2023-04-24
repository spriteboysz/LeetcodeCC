/**
 * Author: Deean
 * Date: 2023-04-24 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> matrixReshape(vector <vector<int>> &mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (m * n != r * c) return mat;
        vector <vector<int>> mat2(r, vector<int>(c));
        for (int k = 0; k < r * c; ++k) {
            mat2[k / c][k % c] = mat[k / m][k % m];
        }
        return mat2;
    }
};

int main() {
    vector <vector<int>> mat = stringToVector2("[[1,2],[3,4]]");
    auto ans = Solution().matrixReshape(mat, 1, 4);
    cout << toString(ans) << endl;
    return 0;
}
