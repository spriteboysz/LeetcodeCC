/**
 * Author: Deean
 * Date: 2023-05-14 20:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> diagonalSort(vector <vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();
        unordered_map<int, vector<int>> hash;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                hash[i - j].emplace_back(mat[i][j]);
            }
        }
        for (auto& v: hash) {
            sort(v.second.rbegin(), v.second.rend());
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                mat[i][j] = hash[i - j].back();
                hash[i - j].pop_back();
            }
        }
        return mat;
    }
};

int main() {
    auto mat = stringToVector2("[[3,3,1,1],[2,2,1,2],[1,1,1,2]]");
    auto ans = Solution().diagonalSort(mat);
    cout << toString(ans) << endl;
    return 0;
}
