/**
 * Author: Deean
 * Date: 2023-04-19 23:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector <vector<int>> &mat, int k) {
        for (int i = 0; i < mat.size(); ++i) {
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(mat[i].back());
        }
        return res;
    }
};

int main() {
    vector <vector<int>> mat = stringToVector2("[[1,1,0,0,0],[1,1,1,1,0],[1,0,0,0,0],[1,1,0,0,0],[1,1,1,1,1]]");
    auto ans = Solution().kWeakestRows(mat, 3);
    cout << toString(ans) << endl;
    return 0;
}
