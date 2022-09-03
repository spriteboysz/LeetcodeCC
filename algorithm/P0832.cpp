/**
 * Author: Deean
 * Date: 2022-09-03 22:00
 * FileName: algorithm/P0832.cpp
 * Description: 832. 翻转图像
 */

#include <vector>
#include <algorithm>
#include <codec.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image) {
        int n = image.size();
        for (int i = 0; i < n; ++i) {
            reverse(image[i].begin(), image[i].end());
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                image[i][j] = abs(image[i][j] - 1);
            }
        }
        return image;
    }
};

int main() {
    vector<vector<int>> image = {{1, 1, 0, 0},
                                 {1, 0, 0, 1},
                                 {0, 1, 1, 1},
                                 {1, 0, 1, 0}};
    auto ans = Solution().flipAndInvertImage(image);
    printVector(ans);
    return 0;
}