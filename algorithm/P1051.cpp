/**
 * Author: Deean
 * Date: 2022-09-03 20:47
 * FileName: algorithm/P1051.cpp
 * Description: 1051. 高度检查器
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int> &heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int cnt = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<int> heights = {5, 1, 2, 3, 4};
    auto ans = Solution().heightChecker(heights);
    cout << ans << endl;
    return 0;
}