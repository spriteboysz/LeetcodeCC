/**
 * Author: Deean
 * Date: 2023-10-13 22:35
 * FileName: LCP
 * Description: LCR 121. 寻找目标值 - 二维数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool findTargetIn2DPlants(vector <vector<int>> &plants, int target) {
        for (int i = 0; i < plants.size(); ++i) {
            for (int j = 0; j < plants[0].size(); ++j) {
                if (target == plants[i][j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    vector <vector<int>> plants = stringToVector2("[[2,3,6,8],[4,5,8,9],[5,9,10,12]]");
    auto ans = Solution().findTargetIn2DPlants(plants, 8);
    cout << toString(ans) << endl;
    return 0;
}