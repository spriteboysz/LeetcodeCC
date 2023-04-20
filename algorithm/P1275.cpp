/**
 * Author: Deean
 * Date: 2023-04-20 22:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(unordered_set<int> set, vector <vector<int>> wins) {
        for (auto win: wins) {
            bool flag = true;
            for (auto pos: win) {
                if (!set.count(pos)) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
        }
        return false;
    }

    string tictactoe(vector <vector<int>> &moves) {
        vector <vector<int>> wins = {{0, 1, 2},
                                     {3, 4, 5},
                                     {6, 7, 8},
                                     {0, 3, 6},
                                     {1, 4, 7},
                                     {2, 5, 8},
                                     {0, 4, 8},
                                     {2, 4, 6}};
        unordered_set<int> set1, set2;
        for (int i = 0, n = moves.size(); i < n; ++i) {
            int pos = moves[i][0] * 3 + moves[i][1];
            if (i % 2 == 0) {
                set1.insert(pos);
                if (check(set1, wins)) return "A";
            } else {
                set2.insert(pos);
                if (check(set2, wins)) return "B";
            }
        }
        return moves.size() == 9 ? "Draw" : "Pending";
    }
};

int main() {
    vector <vector<int>> moves = stringToVector2("[[0,0],[2,0],[1,1],[2,1],[2,2]]");
    auto ans = Solution().tictactoe(moves);
    cout << toString(ans) << endl;
    return 0;
}
