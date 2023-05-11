/**
 * Author: Deean
 * Date: 2023-05-10 23:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countBattleships(vector<vector<char>> &board) {
        int cnt = 0;
        for (int i = 0, n = board.size(); i < n; ++i) {
            for (int j = 0, m = board[0].size(); j < m; ++j) {
                if (board[i][j] == 'X') {
                    if (i > 0 && board[i - 1][j] == 'X') continue;
                    if (j > 0 && board[i][j - 1] == 'X') continue;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<vector<char>> board = {{'X', '.', '.', 'X'},
                                  {'.', '.', '.', 'X'},
                                  {'.', '.', '.', 'X'}};
    auto ans = Solution().countBattleships(board);
    cout << toString(ans) << endl;
    return 0;
}
