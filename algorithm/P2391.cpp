/**
 * Author: Deean
 * Date: 2022-08-31 22:08
 * FileName: algorithm/P2391.cpp
 * Description: 2391. 收集垃圾的最少总时间
 */

# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int count = 0, a = 0, b = 0, c = 0;
        for (int i = 0; i < garbage.size(); ++i) {
            count += garbage[i].size();
            for (int j = 0; j < garbage[i].size(); ++j) {
                if (garbage[i][j] == 'M') a = i;
                if (garbage[i][j] == 'P') b = i;
                if (garbage[i][j] == 'G') c = i;
            }
        }
        for (int i = 0; i < a; ++i) {
            count += travel[i];
        }
        for (int i = 0; i < b; ++i) {
            count += travel[i];
        }
        for (int i = 0; i < c; ++i) {
            count += travel[i];
        }
        return count;
    }
};

int main() {
    vector<string> garbage = {"MMM","PGM","GP"};
    vector<int> travel = {3, 10};
    auto ans = Solution().garbageCollection(garbage, travel);
    cout << ans << endl;
    return 0;
}