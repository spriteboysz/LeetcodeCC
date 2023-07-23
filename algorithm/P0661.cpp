/**
 * Author: Deean
 * Date: 2023-07-23 11:29
 * FileName: algorithm
 * Description:661. 图片平滑器
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> imageSmoother(vector <vector<int>> &img) {
        int m = img.size(), n = img[0].size();
        vector <vector<int>> smoother(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = 0, sum = 0;
                for (int x = i - 1; x <= i + 1; ++x) {
                    for (int y = j - 1; y <= j + 1; ++y) {
                        if (x >= 0 && x < m && y >= 0 && y < n) {
                            num += 1;
                            sum += img[x][y];
                        }
                    }
                }
                smoother[i][j] = sum / num;
            }
        }
        return smoother;
    }
};

int main() {
    auto img = stringToVector2("[[100,200,100],[200,50,200],[100,200,100]]");
    auto ans = Solution().imageSmoother(img);
    cout << toString(ans) << endl;
    return 0;
}
