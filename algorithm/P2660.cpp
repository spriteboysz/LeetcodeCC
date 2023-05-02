/**
 * Author: Deean
 * Date: 2023-05-01 21:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(vector<int> &player) {
        vector<bool> flag(player.size(), false);
        for (int i = 0, n = player.size(); i < n; ++i) {
            if (player[i] == 10) {
                if (i + 1 < n) flag[i + 1] = true;
                if (i + 2 < n) flag[i + 2] = true;
            }
        }
        int sum = 0;
        for (int i = 0, n = player.size(); i < n; ++i) {
            sum += player[i] * (flag[i] + 1);
        }
        return sum;
    }

    int isWinner(vector<int> &player1, vector<int> &player2) {
        int sum1 = process(player1), sum2 = process(player2);
        if (sum1 == sum2) {
            return 0;
        }
        return sum1 > sum2 ? 1 : 2;
    }
};

int main() {
    vector<int> player1 = {4, 10, 7, 9}, player2 = {6, 5, 2, 3};
    auto ans = Solution().isWinner(player1, player2);
    cout << toString(ans) << endl;
    return 0;
}
