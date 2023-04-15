/**
 * Author: Deean
 * Date: 2023-04-15 16:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> construct2DArray(vector<int> &original, int m, int n) {
        if (m * n != original.size()) return {};
        vector <vector<int>> grid(m, vector<int>(n));
        for (int pos = 0; pos < original.size(); ++pos) {
            grid[pos / n][pos % n] = original[pos];
        }
        return grid;
    }
};

int main() {
    vector<int> original = {1, 2, 3, 4};
    auto ans = Solution().construct2DArray(original, 2, 2);
    cout << toString(ans) << endl;
    return 0;
}
