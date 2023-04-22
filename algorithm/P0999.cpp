/**
 * Author: Deean
 * Date: 2023-04-22 14:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>> &board) {
        int n = 8, x = 0, y = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'R') {
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        int cnt = 0;
        vector<vector<int>> directions{{0,  -1},
                                       {0,  1},
                                       {1,  0},
                                       {-1, 0}};
        for (auto direction: directions) {
            int nx = x + direction[0], ny = y + direction[1];
            while (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                if (board[nx][ny] == '.') {
                    nx += direction[0];
                    ny += direction[1];
                } else {
                    if (board[nx][ny] == 'p') {
                        cnt++;
                    }
                    break;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<vector<char>> board = {{'.', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', 'p', '.', '.', '.', '.'},
                                  {'.', '.', '.', 'R', '.', '.', '.', 'p'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', 'p', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.'}};
    auto ans = Solution().numRookCaptures(board);
    cout << toString(ans) << endl;
    return 0;
}
