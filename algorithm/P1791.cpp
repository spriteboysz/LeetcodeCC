/**
 * Author: Deean
 * Date: 2022-09-03 22:50
 * FileName: algorithm/P1791.cpp
 * Description: 1791. 找出星型图的中心节点
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>> &edges) {
        return (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) ? edges[0][0] : edges[0][1];
    }
};

int main() {
    vector<vector<int>> edges = {{1, 2},
                                 {2, 3},
                                 {4, 2}};
    auto ans = Solution().findCenter(edges);
    cout << ans << endl;
    return 0;
}