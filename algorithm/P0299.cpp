/**
 * Author: Deean
 * Date: 2023-07-23 15:12
 * FileName: algorithm
 * Description:299. 猜数字游戏
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> digit1(10, 0), digit2(10, 0);
        int bulls = 0, cows = 0;
        for (int i = 0, n = secret.size(); i < n; ++i) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                digit1[secret[i] - '0']++;
                digit2[guess[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; ++i) {
            cows += min(digit1[i], digit2[i]);
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};

int main() {
    auto ans = Solution().getHint("1807", "7810");
    cout << toString(ans) << endl;
    return 0;
}
