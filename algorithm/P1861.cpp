/**
 * Author: Deean
 * Date: 2023-07-16 13:36
 * FileName: algorithm
 * Description:1861. 旋转盒子
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<char>> rotateTheBox(vector <vector<char>> &box) {
        int m = box.size(), n = box[0].size();
        for (int i = 0; i < m; ++i) {
            deque<int> queue;
            for (int j = n - 1; j >= 0; --j) {
                if (box[i][j] == '*') {
                    queue.clear();
                } else if (box[i][j] == '#') {
                    if (!queue.empty()) {
                        int pos = queue.front();
                        queue.pop_front();
                        box[i][pos] = '#';
                        box[i][j] = '.';
                        queue.push_back(j);
                    }
                } else {
                    queue.push_back(j);
                }
            }
        }

        vector <vector<char>> box2(n, vector<char>(m));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                box2[j][m - i - 1] = box[i][j];
            }
        }
        return box2;
    }
};

int main() {
    vector <vector<char>> box = {{'#', '.', '#'}};
    auto ans = Solution().rotateTheBox(box);
    cout << toString(ans) << endl;
    return 0;
}
