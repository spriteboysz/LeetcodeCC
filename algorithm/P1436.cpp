/**
 * Author: Deean
 * Date: 2022-09-03 16:45
 * FileName: algorithm/P1436.cpp
 * Description: 1436. 旅行终点站
 */

#include <iostream>
#include <vector>
#include <codec.h>
#include <set>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>> &paths) {
        set<string> src, dst;
        for (vector<string> path: paths) {
            src.emplace(path[0]);
            dst.emplace(path[1]);
        }
        string target;
        for (string d: dst) {
            if (src.count(d) == 0) {
                target = d;
                break;
            }
        }
        return target;
    }
};

int main() {
    vector<vector<string>> paths = {{"B", "C"},
                                    {"D", "B"},
                                    {"C", "A"}};
    auto ans = Solution().destCity(paths);
    cout << ans << endl;
    return 0;
}