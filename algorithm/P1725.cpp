/**
 * Author: Deean
 * Date: 2022-09-08 23:01
 * FileName: algorithm/P1725.cpp
 * Description: 1725. 可以形成最大正方形的矩形数目
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>> &rectangles) {
        vector<int> sides;
        int maximum = 0;
        for (auto &rectangle: rectangles) {
            int cur = min(rectangle[0], rectangle[1]);
            sides.push_back(cur);
            maximum = max(maximum, cur);
        }
        int count = 0;
        for (auto side: sides) {
            if (side == maximum) count++;
        }
        return count;
    }
};

int main() {
    vector<vector<int>> rectangles = {{2, 3},
                                      {3, 7},
                                      {4, 3},
                                      {3, 7}};
    auto ans = Solution().countGoodRectangles(rectangles);
    cout << toString(ans) << endl;
    return 0;
}