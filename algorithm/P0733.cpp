/**
 * Author: Deean
 * Date: 2023-04-22 22:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> floodFill(vector <vector<int>> &image, int sr, int sc, int color) {
        int m = image.size(), n = image[0].size(), i = sr, j = sc, temp = image[sr][sc];
        if (temp == color) return image;
        if (i >= 0 && i < m && j >= 0 && j < n) {
            image[i][j] = color;
            if (i - 1 >= 0)
                if (image[i - 1][j] == temp)
                    floodFill(image, i - 1, j, color);
            if (i + 1 < m)
                if (image[i + 1][j] == temp)
                    floodFill(image, i + 1, j, color);
            if (j - 1 >= 0)
                if (image[i][j - 1] == temp)
                    floodFill(image, i, j - 1, color);
            if (j + 1 < n)
                if (image[i][j + 1] == temp)
                    floodFill(image, i, j + 1, color);
        }
        return image;
    }
};

int main() {
    vector <vector<int>> image = stringToVector2("[[1,1,1],[1,1,0],[1,0,1]]");
    auto ans = Solution().floodFill(image, 1, 1, 2);
    cout << toString(ans) << endl;
    return 0;
}
