/**
 * Author: Deean
 * Date: 2023-05-10 21:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector <vector<int>> &points) {
        unordered_set<int> rows;
        for (auto point: points) {
            rows.insert(point[0]);
        }
        vector<int> rows_v;
        for (auto x: rows) {
            rows_v.push_back(x);
        }
        sort(rows_v.begin(), rows_v.end());
        int maximum = 0;
        for (int i = 1, n = rows_v.size(); i < n; ++i) {
            maximum = max(maximum, rows_v[i] - rows_v[i - 1]);
        }
        return maximum;
    }
};

int main() {
    auto points = stringToVector2("[[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]");
    auto ans = Solution().maxWidthOfVerticalArea(points);
    cout << toString(ans) << endl;
    return 0;
}
