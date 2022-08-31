/**
 * Author: Deean
 * Date: 2022-08-31 22:54
 * FileName: algorithm/P1828.cpp
 * Description: 1828. 统计一个圆中点的数目
 */

# include <iostream>
# include <vector>
# include <cmath>

using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries) {
        vector<int> nums;
        for (vector<int> query : queries) {
            int count = 0;
            for (vector<int> point : points) {
                if ((pow((query[0] - point[0]), 2) + pow((query[1] - point[1]), 2)) <= pow(query[2], 2)) {
                    count++;
                }
            }
            nums.push_back(count);
        }
        return nums;
    }
};

int main() {
    vector<vector<int>> points;
    for (int i = 1; i <= 5; ++i) {
        vector<int> point = {i, i};
        points.push_back(point);
        point.clear();
    }
    vector<int> query1 = {1, 2, 2};
    vector<int> query2 = {2, 2, 2};
    vector<int> query3 = {4, 3, 2};
    vector<int> query4 = {4, 3, 3};
    vector<vector<int>> queries = {query1, query2, query3, query4};
    auto ans = Solution().countPoints(points, queries);
    for (int num : ans) cout << num << " ";
    cout << endl;
    return 0;
}