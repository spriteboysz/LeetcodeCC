/**
 * Author: Deean
 * Date: 2023-04-29 19:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector <vector<int>> &mat) {
        int maxIndex = 0, maximum = 0;
        for (int i = 0, n = mat.size(); i < n; ++i) {
            int sum = 0;
            for (int j = 0; j < mat[0].size(); ++j) {
                sum += mat[i][j];
            }
            if (sum > maximum) {
                maximum = sum;
                maxIndex = i;
            }
        }
        return {maxIndex, maximum};
    }
};

int main() {
    vector <vector<int>> mat = stringToVector2("[[0,0,0],[0,1,1]]");
    auto ans = Solution().rowAndMaximumOnes(mat);
    cout << toString(ans) << endl;
    return 0;
}
