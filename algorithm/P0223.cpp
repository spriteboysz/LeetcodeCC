/**
 * Author: Deean
 * Date: 2023-07-23 15:52
 * FileName: algorithm
 * Description:223. 矩形面积
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2 - ax1) * (ay2 - ay1), area2 = (bx2 - bx1) * (by2 - by1);
        int overlapWidth = min(ax2, bx2) - max(ax1, bx1), overlapHeight = min(ay2, by2) - max(ay1, by1);
        int overlapArea = max(overlapWidth, 0) * max(overlapHeight, 0);
        return area1 + area2 - overlapArea;
    }
};

int main() {
    auto ans = Solution().computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
    cout << toString(ans) << endl;
    return 0;
}
