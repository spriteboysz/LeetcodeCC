/**
 * Author: Deean
 * Date: 2023-07-22 22:46
 * FileName: algorithm
 * Description:973. 最接近原点的 K 个点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long process(vector<int> p) {
        int x = p[0], y = p[1];
        return (long long) (x * x + y * y);
    }

    vector <vector<int>> kClosest(vector <vector<int>> &points, int k) {
        sort(points.begin(), points.end(), [&](vector<int> a, vector<int> b) {
            return process(a) < process(b);
        });
        points.resize(k);
        return points;
    }
};

int main() {
    auto points = stringToVector2("[[3,3],[5,-1],[-2,4]]");
    auto ans = Solution().kClosest(points, 2);
    cout << toString(ans) << endl;
    return 0;
}
