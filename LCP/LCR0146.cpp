/**
 * Author: Deean
 * Date: 2023-10-14 13:22
 * FileName: LCP
 * Description: LCR 146. 螺旋遍历二维数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> spiralArray(vector <vector<int>> &array) {
        if (array.size() == 0) return {};
        vector<int> nums;
        int m = array.size(), n = array[0].size();
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        while (true) {
            for (int i = left; i <= right; ++i) {
                nums.push_back(array[top][i]);
            }
            top++;
            if (top > bottom) break;
            for (int i = top; i <= bottom; ++i) {
                nums.push_back(array[i][right]);
            }
            right--;
            if (left > right) break;
            for (int i = right; i >= left; --i) {
                nums.push_back(array[bottom][i]);
            }
            bottom--;
            if (top > bottom) break;
            for (int i = bottom; i >= top; --i) {
                nums.push_back(array[i][left]);
            }
            left++;
            if (left > right) break;
        }
        return nums;
    }
};

int main() {
    vector <vector<int>> grid = stringToVector2("[[1,2,3,4],[12,13,14,5],[11,16,15,6],[10,9,8,7]]");
    auto ans = Solution().spiralArray(grid);
    cout << toString(ans) << endl;
    return 0;
}