/**
 * Author: Deean
 * Date: 2022-09-04 14:03
 * FileName: algorithm/P1557.cpp
 * Description: 1557. 可以到达所有点的最少点数目
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges) {
        vector<int> ret;
        unordered_set<int> end;
        for (auto edge: edges) {
            end.insert(edge[1]);
        }
        for (int i = 0; i < n; ++i) {
            if (end.find(i) == end.end()) ret.push_back(i);
        }
        return ret;
    }
};

int main() {
    vector<vector<int>> edges = {{0, 1},
                                 {2, 1},
                                 {3, 1},
                                 {1, 4},
                                 {2, 4}};
    auto ans = Solution().findSmallestSetOfVertices(5, edges);
    cout << vectorToString(ans) << endl;
    return 0;
}