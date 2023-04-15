/**
 * Author: Deean
 * Date: 2023-04-15 15:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxDistance(vector<int> &colors) {
        int n = colors.size(), max1, max2;
        for (int i = n - 1; i >= 0; --i) {
            if (colors[i] != colors[0]) {
                max1 = i;
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (colors[i] != colors[n - 1]) {
                max2 = n - 1 - i;
                break;
            }
        }
        return max(max1, max2);
    }
};

int main() {
    vector<int> colors = {1, 1, 1, 6, 1, 1, 1};
    auto ans = Solution().maxDistance(colors);
    cout << toString(ans) << endl;
    return 0;
}
