/**
 * Author: Deean
 * Date: 2022-09-09 23:20
 * FileName: algorithm/P1854.cpp
 * Description: 1854. 人口最多的年份
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int maximumPopulation(vector<vector<int>> &logs) {
        int ans, n = 0, Max = 0;
        char year[101] = {0};
        for (auto &log: logs) {
            ++year[log[0] - 1950];
            --year[log[1] - 1950];
        }
        for (int i = 0; i < 101; ++i) {
            n += year[i];
            if (n > Max) {
                ans = i, Max = n;
            }
        }
        return ans + 1950;
    }
};

int main() {
    vector<vector<int>> logs = stringToVector2("[[1950,1961],[1960,1971],[1970,1981]]");
    cout << vector2ToString(logs) << endl;
    auto ans = Solution().maximumPopulation(logs);
    cout << toString(ans) << endl;
    return 0;
}