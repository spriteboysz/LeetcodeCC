/**
 * Author: Deean
 * Date: 2023-04-15 12:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkValid(vector <vector<int>> &matrix) {
        int n = matrix.size();
        unordered_set<int> occur;
        for (int i = 0; i < n; ++i) {
            occur.clear();
            for (int j = 0; j < n; ++j) {
                if (occur.count(matrix[i][j])) {
                    return false;
                }
                occur.insert(matrix[i][j]);
            }
        }
        for (int i = 0; i < n; ++i) {
            occur.clear();
            for (int j = 0; j < n; ++j) {
                if (occur.count(matrix[j][i])) {
                    return false;
                }
                occur.insert(matrix[j][i]);
            }
        }
        return true;
    }
};

int main() {
    vector <vector<int>> matrix = stringToVector2("[[1,2,3],[3,1,2],[2,3,1]]");
    auto ans = Solution().checkValid(matrix);
    cout << toString(ans) << endl;
    return 0;
}
