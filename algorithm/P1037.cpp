/**
 * Author: Deean
 * Date: 2023-07-22 22:19
 * FileName: algorithm
 * Description:1037. 有效的回旋镖
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isBoomerang(vector <vector<int>> &points) {
        vector<int> v1 = {points[1][0] - points[0][0], points[1][1] - points[0][1]};
        vector<int> v2 = {points[2][0] - points[0][0], points[2][1] - points[0][1]};
        return v1[0] * v2[1] != v2[0] * v1[1];
    }
};

int main() {
    auto points = stringToVector2("[[1,1],[2,3],[3,2]]");
    auto ans = Solution().isBoomerang(points);
    cout << toString(ans) << endl;
    return 0;
}
