/**
 * Author: Deean
 * Date: 2023-04-22 17:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2) {
        return (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0]) &&
                min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
    }
};

int main() {
    vector<int> rec1 = {0, 0, 2, 2}, rec2 = {1, 1, 3, 3};
    auto ans = Solution().isRectangleOverlap(rec1, rec2);
    cout << toString(ans) << endl;
    return 0;
}
